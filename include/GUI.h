///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/slider.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/clrpicker.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class frame
///////////////////////////////////////////////////////////////////////////////
class frame : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText23;
		wxStaticText* redText;
		wxSlider* redSlider;
		wxStaticText* redSliderLabel;
		wxStaticText* greenText;
		wxSlider* greenSlider;
		wxStaticText* greenSliderLabel;
		wxStaticText* blueText;
		wxSlider* blueSlider;
		wxStaticText* blueSliderLabel;
		wxStaticText* m_staticText24;
		wxStaticText* redSliderChannelLabel;
		wxSlider* redChannelSlider;
		wxStaticText* redChannelText;
		wxStaticText* greenSliderChannelLabel;
		wxSlider* greenChannelSlider;
		wxStaticText* greenChannelText;
		wxStaticText* blueSliderChannelLabel;
		wxSlider* blueChannelSlider;
		wxStaticText* blueChannelText;
		wxStaticText* m_staticText25;
		wxCheckBox* bichromeCheckBox;
		wxColourPickerCtrl* bichromeColorPicker;
		wxPanel* imagePanel;
		wxMenuBar* menuBar;
		wxMenu* menuFile;
		wxMenu* menuEdit;
		wxMenu* menuHelp;

		// Virtual event handlers, overide them in your derived class
		virtual void onClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void onRedSlider( wxScrollEvent& event ) { event.Skip(); }
		virtual void redSliderOnRelease( wxScrollEvent& event ) { event.Skip(); }
		virtual void onGreenSlider( wxScrollEvent& event ) { event.Skip(); }
		virtual void greenSliderOnRelease( wxScrollEvent& event ) { event.Skip(); }
		virtual void onBlueSlider( wxScrollEvent& event ) { event.Skip(); }
		virtual void blueSliderOnRelease( wxScrollEvent& event ) { event.Skip(); }
		virtual void redChannelSliderOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void redChannelSliderOnRelease( wxScrollEvent& event ) { event.Skip(); }
		virtual void greenChannelSliderOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void greenChannelSliderOnRelease( wxScrollEvent& event ) { event.Skip(); }
		virtual void blueChannelSliderOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void blueChannelSliderOnRelease( wxScrollEvent& event ) { event.Skip(); }
		virtual void bichromeOnCheck( wxCommandEvent& event ) { event.Skip(); }
		virtual void bichromeOnColorChange( wxColourPickerEvent& event ) { event.Skip(); }
		virtual void onUpdate( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void onOpen( wxCommandEvent& event ) { event.Skip(); }
		virtual void onSave( wxCommandEvent& event ) { event.Skip(); }
		virtual void onLoadParams( wxCommandEvent& event ) { event.Skip(); }
		virtual void onSaveParams( wxCommandEvent& event ) { event.Skip(); }
		virtual void onQuit( wxCommandEvent& event ) { event.Skip(); }
		virtual void onUndo( wxCommandEvent& event ) { event.Skip(); }
		virtual void onRedo( wxCommandEvent& event ) { event.Skip(); }
		virtual void onAbout( wxCommandEvent& event ) { event.Skip(); }


	public:

		frame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 900,614 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~frame();

};

