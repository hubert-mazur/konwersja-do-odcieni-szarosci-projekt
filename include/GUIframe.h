#ifndef __GUIframe__
#define __GUIframe__

/**
@file
Subclass of frame, which is generated by wxFormBuilder.
*/

#include <wx/wx.h>
#include <vector>
#include "GUI.h"
#include "SliderData.h"
#include <fstream>

//// end generated include

/** Implementing frame */
class GUIframe : public frame
{
protected:
	// Handlers for frame events.
	void colorKeepingGreyscale(wxImage *image);

	void onOpen (wxCommandEvent &event) override;

	void onSave (wxCommandEvent &event) override;

	void onLoadParams (wxCommandEvent &event) override;

	void onSaveParams (wxCommandEvent &event) override;

	void onQuit (wxCommandEvent &event) override;

	void onAbout (wxCommandEvent &event) override;

	void onUpdate (wxUpdateUIEvent &event) override;

	void onClose (wxCloseEvent &event) override;

	void onUndo( wxCommandEvent& event ) override;

	void onRedo( wxCommandEvent& event ) override;

public:
	/** Constructor */
	explicit GUIframe (wxWindow *parent);

	//// end generated class members
	void refresh (wxClientDC &dc);


	wxImage *_image = new wxImage;
	wxImage *_resized_image = new wxImage ();
	wxImage *_greyed_image = new wxImage ();

	std::vector<SliderData> _undoHistory;

	int _undoHistory_current_pos;


	void onRedSlider (wxScrollEvent &event) override ;

	void onGreenSlider (wxScrollEvent &event) override ;

	void onBlueSlider (wxScrollEvent &event) override ;

	void channelGreyscale();

	void pixelGreyscale(int i, int j, wxImage *image);

	void redChannelSliderOnScroll (wxScrollEvent &event) override;

	void greenChannelSliderOnScroll (wxScrollEvent &event) override;

	void blueChannelSliderOnScroll (wxScrollEvent &event) override;

	void bichromeOnColorChange (wxColourPickerEvent &event) override;

	void bichromeOnCheck (wxCommandEvent &event) override;

	void redSliderOnRelease( wxScrollEvent& event ) override;

	void greenSliderOnRelease( wxScrollEvent& event ) override;

	void blueSliderOnRelease( wxScrollEvent& event ) override;

	void redChannelSliderOnRelease( wxScrollEvent& event ) override;

	void greenChannelSliderOnRelease( wxScrollEvent& event ) override;

	void blueChannelSliderOnRelease( wxScrollEvent& event ) override;

	void pushUndoHistory ();

	void setSliders ();


	~GUIframe () override
	{
		delete _resized_image;
		delete _image;
		delete _greyed_image;
	}


};

#endif // __GUIframe__
