#include "GUIframe.h"
#include "headers.h"

GUIframe::GUIframe (wxWindow *parent)
		:
		frame (parent)
{
	_undoHistory_current_pos = 0;
	pushUndoHistory ();
	wxInitAllImageHandlers ();

}


void GUIframe::colorKeepingGreyscale (wxImage *image)
{
	if (image->Ok ())
	{
		int height = image->GetHeight ();
		int width = image->GetWidth ();

		for (int i = 0; i < width; i++)
		{
			for (int j = 0; j < height; j++)
			{
				if ((image->GetRed (i, j) <= 0.8 * 0.5 * redSlider->GetValue () ||
					 image->GetGreen (i, j) >= 0.8 * 0.5 * redSlider->GetValue () ||
					 image->GetBlue (i, j) >= 1 * 0.5 * redSlider->GetValue ()) &&
					(image->GetRed (i, j) >= 1 * 0.4 * greenSlider->GetValue () ||
					 image->GetGreen (i, j) <= 0.2 * 0.5 * greenSlider->GetValue () ||
					 image->GetBlue (i, j) >= 0.8 * 0.5 * greenSlider->GetValue ()) &&
					(image->GetRed (i, j) >= 1 * 0.4 * blueSlider->GetValue () ||
					 image->GetGreen (i, j) >= 1 * 0.8 * blueSlider->GetValue () ||
					 image->GetBlue (i, j) <= 0.1 * blueSlider->GetValue ()))
				{
					pixelGreyscale (i, j, image);
				}
			}

		}
	}
	else
	{
		wxMessageDialog (nullptr, "Add an image first", "Warning", wxOK).ShowModal ();
	}
}

void GUIframe::onOpen (wxCommandEvent &event)
{

	wxClientDC DC (imagePanel);

	wxFileDialog *file_dialog = new wxFileDialog (this, "Load file", "", "", wxT("to jpg (*.jpg)|*.jpg"),
												  wxFD_OPEN );
	file_dialog->ShowModal ();

	_image->LoadFile (file_dialog->GetPath (), wxBITMAP_TYPE_JPEG);

	if (_image->Ok ())
	{
		*_resized_image = *_image;

		if (_resized_image->GetSize ().x > 500 || _resized_image->GetSize ().y > 500)
		{

			double proportion =
					static_cast<double>(_resized_image->GetSize ().y) /
					static_cast<double>(_resized_image->GetSize ().x);
			std::cout << proportion << std::endl;
			if (_image->GetSize ().x > 500 || _image->GetSize ().y > 500)
			{
				if (_resized_image->GetSize ().x >= _resized_image->GetSize ().y)
				{
					double newY = 500. * proportion;
					_resized_image->Rescale (500, static_cast<int>(newY));
				}
				else
				{
					double newX = 500. * (1. / proportion);
					_resized_image->Rescale (static_cast<int>(newX), 500);
				}
			}
		}
		DC.SetBackground (wxBrush (*wxBLACK));
		*_greyed_image = *_resized_image;
		refresh (DC);
	}
}

void GUIframe::onSave (wxCommandEvent &event)
{
	wxFileDialog fileDialog (this, "", "", "", "JPG files (*.jpg)|*.jpg",
							 wxFD_SAVE | wxFD_OVERWRITE_PROMPT);
	if (fileDialog.ShowModal () == wxID_CANCEL)
		return;

	auto *to_save = new wxImage (*_image);
	colorKeepingGreyscale (to_save);

	if (to_save->Ok ())
		to_save->SaveFile (fileDialog.GetPath ());

}

void GUIframe::onQuit (wxCommandEvent &event)
{
	if (wxMessageDialog (nullptr, "Are you sure you want to exit?", "Confirm exit", wxOK | wxCANCEL).ShowModal () ==
		wxID_OK)
		Destroy ();
}

void GUIframe::onAbout (wxCommandEvent &event)
{
	wxLaunchDefaultApplication ("DOC/About.pdf");
}


void GUIframe::refresh (wxClientDC &dc)
{

	if (_greyed_image->Ok ())
	{
		dc.SetBackground (wxBrush (*wxBLACK));
		wxBufferedDC buff (&dc);

		wxBitmap bitmap (*_greyed_image);
		buff.Clear ();
		buff.DrawBitmap (bitmap, static_cast<wxCoord>((-_greyed_image->GetSize ().x + imagePanel->GetSize ().x) / 2.0),
						 static_cast<wxCoord >((-_greyed_image->GetSize ().y + imagePanel->GetSize ().y) / 2.0));
	}

}

void GUIframe::onUpdate (wxUpdateUIEvent &event)
{
	wxClientDC dc (imagePanel);
	dc.SetBackground (wxBrush (wxColour (*wxBLACK)));
	refresh (dc);
}

void GUIframe::onClose (wxCloseEvent &event)
{
//	if (wxMessageDialog (NULL, "Are you sure you want to exit?", "Confirm exit", wxOK | wxCANCEL).ShowModal () ==
//		wxID_OK)
	Destroy ();
}

void GUIframe::pixelGreyscale (int i, int j, wxImage *image)
{
	int average = 0;

	average += static_cast<int>(image->GetRed (i, j) * (redChannelSlider->GetValue () * 1.5) / 100.0 +
								image->GetGreen (i, j) * (greenChannelSlider->GetValue () * 1.5) / 100.0 +
								image->GetBlue (i, j) * (blueChannelSlider->GetValue () * 1.5) / 100.0);

	average /= 3;

	if (average < 0) average = 0;
	if (average > 255) average = 255;

	image->SetRGB (i, j, average, average, average);

	if (bichromeCheckBox->GetValue ())
	{
		wxColour colour = bichromeColorPicker->GetColour ();

		image->SetRGB (i, j, colour.Red () * average / 255, colour.Green () * average / 255,
					   colour.Blue () * average / 255);
	}
}

void GUIframe::channelGreyscale ()
{
	*_greyed_image = *_resized_image;

	if (_greyed_image->Ok ())
	{
		int height = _greyed_image->GetHeight ();
		int width = _greyed_image->GetWidth ();


		for (int i = 0; i < width; i++)
			for (int j = 0; j < height; j++)
				pixelGreyscale (i, j, _greyed_image);

	}
	else
	{
		wxMessageDialog (nullptr, "Add an image first", "Warning", wxOK).ShowModal ();
		bichromeCheckBox->SetValue (false);
	}
}

void GUIframe::onRedSlider (wxScrollEvent &event)
{
	redSliderLabel->SetLabelText (std::to_string (redSlider->GetValue ()));
	*_greyed_image = *_resized_image;
	colorKeepingGreyscale (_greyed_image);
}

void GUIframe::onGreenSlider (wxScrollEvent &event)
{
	greenSliderLabel->SetLabelText (std::to_string (greenSlider->GetValue ()));
	*_greyed_image = *_resized_image;
	colorKeepingGreyscale (_greyed_image);
}

void GUIframe::onBlueSlider (wxScrollEvent &event)
{
	blueSliderLabel->SetLabelText (std::to_string (blueSlider->GetValue ()));
	*_greyed_image = *_resized_image;
	colorKeepingGreyscale (_greyed_image);
}

void GUIframe::redChannelSliderOnScroll (wxScrollEvent &event)
{
	redSliderChannelLabel->SetLabelText (std::to_string (redChannelSlider->GetValue ()) + "%");
	channelGreyscale ();
}

void GUIframe::greenChannelSliderOnScroll (wxScrollEvent &event)
{
	greenSliderChannelLabel->SetLabelText (std::to_string (greenChannelSlider->GetValue ()) + "%");
	channelGreyscale ();
}

void GUIframe::blueChannelSliderOnScroll (wxScrollEvent &event)
{
	blueSliderChannelLabel->SetLabelText (std::to_string (blueChannelSlider->GetValue ()) + "%");
	channelGreyscale ();
}

void GUIframe::bichromeOnColorChange (wxColourPickerEvent &event)
{
	if (bichromeCheckBox->GetValue ()) channelGreyscale ();
	pushUndoHistory ();
}

void GUIframe::bichromeOnCheck (wxCommandEvent &event)
{
	channelGreyscale ();
	pushUndoHistory ();

	redSlider->SetValue (0);
	redSliderLabel->SetLabel (std::to_string (0));

	greenSlider->SetValue (0);
	greenSliderLabel->SetLabel (std::to_string (0));

	blueSlider->SetValue (0);
	blueSliderLabel->SetLabel (std::to_string (0));
}

void GUIframe::redSliderOnRelease (wxScrollEvent &event)
{
	pushUndoHistory ();
}

void GUIframe::greenSliderOnRelease (wxScrollEvent &event)
{
	pushUndoHistory ();
}

void GUIframe::blueSliderOnRelease (wxScrollEvent &event)
{
	pushUndoHistory ();
}

void GUIframe::redChannelSliderOnRelease (wxScrollEvent &event)
{
	pushUndoHistory ();
}

void GUIframe::greenChannelSliderOnRelease (wxScrollEvent &event)
{
	pushUndoHistory ();
}

void GUIframe::blueChannelSliderOnRelease (wxScrollEvent &event)
{
	pushUndoHistory ();
}

void GUIframe::pushUndoHistory ()
{
	SliderData historyRegister (std::make_pair ("redSlider", redSlider->GetValue ()),
								std::make_pair ("greenSlider", greenSlider->GetValue ()),
								std::make_pair ("blueSlider", blueSlider->GetValue ()),
								std::make_pair ("redChannelSlider", redChannelSlider->GetValue ()),
								std::make_pair ("greenChannelSlider", greenChannelSlider->GetValue ()),
								std::make_pair ("blueChannelSlider", blueChannelSlider->GetValue ()),
								std::make_pair ("bichromeCheckBox", bichromeCheckBox->GetValue ()),
								std::make_pair ("bichromeColour", bichromeColorPicker->GetColour ()));

	_undoHistory.emplace_back (historyRegister);
	_undoHistory_current_pos++;
}

void GUIframe::setSliders ()
{

	auto slider = _undoHistory[_undoHistory_current_pos - 1];

	redSliderLabel->SetLabelText (std::to_string (slider.getRedSlider ().second));
	redSlider->SetValue (slider.getRedSlider ().second);

	greenSliderLabel->SetLabel (std::to_string (slider.getGreenSlider ().second));
	greenSlider->SetValue (slider.getGreenSlider ().second);

	blueSliderLabel->SetLabel (std::to_string (slider.getBlueSlider ().second));
	blueSlider->SetValue (slider.getBlueSlider ().second);

	redSliderChannelLabel->SetLabel (std::to_string (slider.getRedChannelSlider ().second) + "%");
	redChannelSlider->SetValue (slider.getRedChannelSlider ().second);

	blueSliderChannelLabel->SetLabel (std::to_string (slider.getBlueChannelSlider ().second) + "%");
	blueChannelSlider->SetValue (slider.getBlueChannelSlider ().second);

	greenSliderChannelLabel->SetLabel (std::to_string (slider.getGreenChannelSlider ().second) + "%");
	greenChannelSlider->SetValue (slider.getGreenChannelSlider ().second);

	bichromeCheckBox->SetValue (slider.getBichromeCheckBox ().second);
	bichromeColorPicker->SetColour (slider.getBichromeColour ().second);
}

void GUIframe::onUndo (wxCommandEvent &event)
{

	if (_undoHistory.size () > 1 && _undoHistory_current_pos > 1)
	{
		_undoHistory_current_pos--;
		setSliders ();
		channelGreyscale ();
		*_greyed_image = *_resized_image;
		colorKeepingGreyscale (_greyed_image);

	}
	else
	{
		*_greyed_image = *_resized_image;
	}
}

void GUIframe::onRedo (wxCommandEvent &event)
{
	if (_undoHistory_current_pos < _undoHistory.size ())
	{
		_undoHistory_current_pos++;
		setSliders ();
		channelGreyscale ();
		*_greyed_image = *_resized_image;
		colorKeepingGreyscale (_greyed_image);
	}
	else
	{
		bichromeOnCheck (event);
	}
}

void GUIframe::onLoadParams (wxCommandEvent &event)
{
	std::ifstream file ("data.xd");
	SliderData temp;
	std::string label;
	int value, red, green, blue;
	bool isChecked;
	file >> label >> value;
	temp.setRedSlider (std::make_pair (label, value));
	file >> label >> value;
	temp.setGreenSlider (std::make_pair (label, value));
	file >> label >> value;
	temp.setBlueSlider (std::make_pair (label, value));
	file >> label >> value;
	temp.setRedChannelSlider (std::make_pair (label, value));
	file >> label >> value;
	temp.setGreenChannelSlider (std::make_pair (label, value));
	file >> label >> value;
	temp.setBlueChannelSlider (std::make_pair (label, value));
	file >> label >> isChecked;
	temp.setBichromeCheckBox (std::make_pair (label, isChecked));
	file >> label >> red >> green >> blue;
	temp.setBichromeColour (std::make_pair (label, wxColour (red, green, blue)));

	_undoHistory.emplace_back (temp);

	onUndo (event);
	onRedo (event);
}

void GUIframe::onSaveParams (wxCommandEvent &event)
{
	std::ofstream file ("data.xd");
	file << _undoHistory[_undoHistory.size () - 1];
	file.close ();
}
