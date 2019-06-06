///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

frame::frame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 340,614 ), wxDefaultSize );
	this->SetForegroundColour( wxColour( 50, 50, 50 ) );
	this->SetBackgroundColour( wxColour( 50, 50, 50 ) );

	wxBoxSizer* mainSizer;
	mainSizer = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* buttonSizer;
	buttonSizer = new wxBoxSizer( wxVERTICAL );

	buttonSizer->SetMinSize( wxSize( 200,-1 ) );
	wxBoxSizer* sliderSizer;
	sliderSizer = new wxBoxSizer( wxVERTICAL );

	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("Color keep"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	m_staticText23->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );
	m_staticText23->SetForegroundColour( wxColour( 255, 255, 255 ) );
	m_staticText23->SetMinSize( wxSize( 300,-1 ) );

	sliderSizer->Add( m_staticText23, 0, wxALIGN_LEFT|wxALL, 10 );

	wxBoxSizer* redSizer;
	redSizer = new wxBoxSizer( wxHORIZONTAL );

	redText = new wxStaticText( this, wxID_ANY, wxT("Red"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	redText->Wrap( -1 );
	redText->SetForegroundColour( wxColour( 255, 255, 255 ) );

	redSizer->Add( redText, 0, wxALIGN_CENTER|wxALL, 15 );

	redSlider = new wxSlider( this, wxID_ANY, 0, 0, 255, wxDefaultPosition, wxSize( 175,50 ), wxSL_HORIZONTAL );
	redSizer->Add( redSlider, 0, wxALIGN_CENTER|wxALL, 5 );

	redSliderLabel = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	redSliderLabel->Wrap( -1 );
	redSliderLabel->SetForegroundColour( wxColour( 255, 255, 255 ) );

	redSizer->Add( redSliderLabel, 0, wxALIGN_CENTER|wxALL, 5 );


	sliderSizer->Add( redSizer, 1, wxEXPAND, 5 );

	wxBoxSizer* greenSizer;
	greenSizer = new wxBoxSizer( wxHORIZONTAL );

	greenText = new wxStaticText( this, wxID_ANY, wxT("Green"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	greenText->Wrap( -1 );
	greenText->SetForegroundColour( wxColour( 255, 255, 255 ) );

	greenSizer->Add( greenText, 0, wxALIGN_CENTER|wxALL, 15 );

	greenSlider = new wxSlider( this, wxID_ANY, 0, 0, 255, wxDefaultPosition, wxSize( 175,50 ), wxSL_HORIZONTAL );
	greenSizer->Add( greenSlider, 0, wxALL, 5 );

	greenSliderLabel = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	greenSliderLabel->Wrap( -1 );
	greenSliderLabel->SetForegroundColour( wxColour( 255, 255, 255 ) );

	greenSizer->Add( greenSliderLabel, 0, wxALIGN_CENTER|wxALL, 5 );


	sliderSizer->Add( greenSizer, 1, wxEXPAND, 5 );

	wxBoxSizer* blueSizer;
	blueSizer = new wxBoxSizer( wxHORIZONTAL );

	blueText = new wxStaticText( this, wxID_ANY, wxT("Blue"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	blueText->Wrap( -1 );
	blueText->SetForegroundColour( wxColour( 255, 255, 255 ) );

	blueSizer->Add( blueText, 0, wxALIGN_CENTER|wxALL, 15 );

	blueSlider = new wxSlider( this, wxID_ANY, 0, 0, 255, wxDefaultPosition, wxSize( 175,50 ), wxSL_HORIZONTAL );
	blueSizer->Add( blueSlider, 0, wxALL, 5 );

	blueSliderLabel = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	blueSliderLabel->Wrap( -1 );
	blueSliderLabel->SetForegroundColour( wxColour( 255, 255, 255 ) );

	blueSizer->Add( blueSliderLabel, 0, wxALIGN_CENTER|wxALL, 5 );


	sliderSizer->Add( blueSizer, 1, wxEXPAND, 5 );


	buttonSizer->Add( sliderSizer, 0, wxEXPAND, 5 );

	wxBoxSizer* chanelsSliderSizer;
	chanelsSliderSizer = new wxBoxSizer( wxVERTICAL );

	m_staticText24 = new wxStaticText( this, wxID_ANY, wxT("Mixing channels"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	m_staticText24->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );
	m_staticText24->SetForegroundColour( wxColour( 255, 255, 255 ) );
	m_staticText24->SetMinSize( wxSize( 300,-1 ) );

	chanelsSliderSizer->Add( m_staticText24, 0, wxALL, 10 );

	wxBoxSizer* redChannelSizer;
	redChannelSizer = new wxBoxSizer( wxHORIZONTAL );

	redSliderChannelLabel = new wxStaticText( this, wxID_ANY, wxT("33%"), wxDefaultPosition, wxDefaultSize, 0 );
	redSliderChannelLabel->Wrap( -1 );
	redSliderChannelLabel->SetForegroundColour( wxColour( 255, 255, 255 ) );
	redSliderChannelLabel->SetMinSize( wxSize( 36,-1 ) );

	redChannelSizer->Add( redSliderChannelLabel, 0, wxALIGN_CENTER|wxALL, 5 );

	redChannelSlider = new wxSlider( this, wxID_ANY, 33, -200, 200, wxDefaultPosition, wxSize( 175,50 ), wxSL_HORIZONTAL );
	redChannelSizer->Add( redChannelSlider, 0, wxALL, 5 );

	redChannelText = new wxStaticText( this, wxID_ANY, wxT("Red channel"), wxDefaultPosition, wxDefaultSize, 0 );
	redChannelText->Wrap( -1 );
	redChannelText->SetForegroundColour( wxColour( 255, 255, 255 ) );

	redChannelSizer->Add( redChannelText, 0, wxALIGN_CENTER|wxALL, 5 );


	chanelsSliderSizer->Add( redChannelSizer, 1, wxEXPAND, 5 );

	wxBoxSizer* greenChannelSizer;
	greenChannelSizer = new wxBoxSizer( wxHORIZONTAL );

	greenSliderChannelLabel = new wxStaticText( this, wxID_ANY, wxT("33%"), wxDefaultPosition, wxDefaultSize, 0 );
	greenSliderChannelLabel->Wrap( -1 );
	greenSliderChannelLabel->SetForegroundColour( wxColour( 255, 255, 255 ) );
	greenSliderChannelLabel->SetMinSize( wxSize( 36,-1 ) );

	greenChannelSizer->Add( greenSliderChannelLabel, 0, wxALIGN_CENTER|wxALL, 5 );

	greenChannelSlider = new wxSlider( this, wxID_ANY, 33, -200, 200, wxDefaultPosition, wxSize( 175,50 ), wxSL_HORIZONTAL );
	greenChannelSizer->Add( greenChannelSlider, 0, wxALL, 5 );

	greenChannelText = new wxStaticText( this, wxID_ANY, wxT("Green channel"), wxDefaultPosition, wxDefaultSize, 0 );
	greenChannelText->Wrap( -1 );
	greenChannelText->SetForegroundColour( wxColour( 255, 255, 255 ) );

	greenChannelSizer->Add( greenChannelText, 0, wxALIGN_CENTER|wxALL, 5 );


	chanelsSliderSizer->Add( greenChannelSizer, 1, wxEXPAND, 5 );

	wxBoxSizer* blueChannelSizer;
	blueChannelSizer = new wxBoxSizer( wxHORIZONTAL );

	blueSliderChannelLabel = new wxStaticText( this, wxID_ANY, wxT("33%"), wxDefaultPosition, wxDefaultSize, 0 );
	blueSliderChannelLabel->Wrap( -1 );
	blueSliderChannelLabel->SetForegroundColour( wxColour( 255, 255, 255 ) );
	blueSliderChannelLabel->SetMinSize( wxSize( 36,-1 ) );

	blueChannelSizer->Add( blueSliderChannelLabel, 0, wxALIGN_CENTER|wxALL, 5 );

	blueChannelSlider = new wxSlider( this, wxID_ANY, 33, -200, 200, wxDefaultPosition, wxSize( 175,50 ), wxSL_HORIZONTAL );
	blueChannelSizer->Add( blueChannelSlider, 0, wxALL, 5 );

	blueChannelText = new wxStaticText( this, wxID_ANY, wxT("Blue channel"), wxDefaultPosition, wxDefaultSize, 0 );
	blueChannelText->Wrap( -1 );
	blueChannelText->SetForegroundColour( wxColour( 255, 255, 255 ) );

	blueChannelSizer->Add( blueChannelText, 0, wxALIGN_CENTER|wxALL, 5 );


	chanelsSliderSizer->Add( blueChannelSizer, 1, wxEXPAND, 5 );

	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("Bichrome"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	m_staticText25->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );
	m_staticText25->SetForegroundColour( wxColour( 255, 255, 255 ) );
	m_staticText25->SetMinSize( wxSize( 300,-1 ) );

	chanelsSliderSizer->Add( m_staticText25, 0, wxALL, 10 );


	buttonSizer->Add( chanelsSliderSizer, 0, wxEXPAND, 5 );

	wxBoxSizer* bichromeSizer;
	bichromeSizer = new wxBoxSizer( wxHORIZONTAL );

	bichromeCheckBox = new wxCheckBox( this, wxID_ANY, wxT("Bichrome"), wxDefaultPosition, wxDefaultSize, 0 );
	bichromeCheckBox->SetForegroundColour( wxColour( 254, 254, 254 ) );

	bichromeSizer->Add( bichromeCheckBox, 0, wxALIGN_CENTER|wxALL, 18 );

	bichromeColorPicker = new wxColourPickerCtrl( this, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	bichromeSizer->Add( bichromeColorPicker, 0, wxALIGN_CENTER|wxALL, 18 );


	buttonSizer->Add( bichromeSizer, 0, wxEXPAND, 5 );


	mainSizer->Add( buttonSizer, 0, wxEXPAND, 5 );

	wxBoxSizer* imageSizer;
	imageSizer = new wxBoxSizer( wxHORIZONTAL );

	imagePanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	imageSizer->Add( imagePanel, 1, wxEXPAND | wxALL, 5 );


	mainSizer->Add( imageSizer, 1, wxEXPAND, 5 );


	this->SetSizer( mainSizer );
	this->Layout();
	menuBar = new wxMenuBar( 0 );
	menuBar->SetForegroundColour( wxColour( 0, 0, 0 ) );
	menuBar->SetBackgroundColour( wxColour( 0, 0, 0 ) );

	menuFile = new wxMenu();
	wxMenuItem* menuFileOpen;
	menuFileOpen = new wxMenuItem( menuFile, wxID_ANY, wxString( wxT("Open image") ) , wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( menuFileOpen );

	wxMenuItem* menuFileSave;
	menuFileSave = new wxMenuItem( menuFile, wxID_ANY, wxString( wxT("Save image") ) , wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( menuFileSave );

	wxMenuItem* menuFileLoadParams;
	menuFileLoadParams = new wxMenuItem( menuFile, wxID_ANY, wxString( wxT("Load parameters") ) , wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( menuFileLoadParams );

	wxMenuItem* menuFileSaveParams;
	menuFileSaveParams = new wxMenuItem( menuFile, wxID_ANY, wxString( wxT("Save parameters") ) , wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( menuFileSaveParams );

	wxMenuItem* menuFileQuit;
	menuFileQuit = new wxMenuItem( menuFile, wxID_ANY, wxString( wxT("Quit") ) , wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( menuFileQuit );

	menuBar->Append( menuFile, wxT("File") );

	menuEdit = new wxMenu();
	wxMenuItem* menuEditUndo;
	menuEditUndo = new wxMenuItem( menuEdit, wxID_ANY, wxString( wxT("Undo") ) , wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditUndo );

	wxMenuItem* menuEditRedo;
	menuEditRedo = new wxMenuItem( menuEdit, wxID_ANY, wxString( wxT("Redo") ) , wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditRedo );

	menuBar->Append( menuEdit, wxT("Edit") );

	menuHelp = new wxMenu();
	wxMenuItem* menuHelpAbout;
	menuHelpAbout = new wxMenuItem( menuHelp, wxID_ANY, wxString( wxT("About") ) , wxEmptyString, wxITEM_NORMAL );
	menuHelp->Append( menuHelpAbout );

	menuBar->Append( menuHelp, wxT("Help") );

	this->SetMenuBar( menuBar );


	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( frame::onClose ) );
	redSlider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( frame::onRedSlider ), NULL, this );
	redSlider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( frame::onRedSlider ), NULL, this );
	redSlider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( frame::onRedSlider ), NULL, this );
	redSlider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( frame::onRedSlider ), NULL, this );
	redSlider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( frame::onRedSlider ), NULL, this );
	redSlider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( frame::onRedSlider ), NULL, this );
	redSlider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( frame::onRedSlider ), NULL, this );
	redSlider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::onRedSlider ), NULL, this );
	redSlider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( frame::onRedSlider ), NULL, this );
	redSlider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::redSliderOnRelease ), NULL, this );
	greenSlider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( frame::onGreenSlider ), NULL, this );
	greenSlider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( frame::onGreenSlider ), NULL, this );
	greenSlider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( frame::onGreenSlider ), NULL, this );
	greenSlider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( frame::onGreenSlider ), NULL, this );
	greenSlider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( frame::onGreenSlider ), NULL, this );
	greenSlider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( frame::onGreenSlider ), NULL, this );
	greenSlider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( frame::onGreenSlider ), NULL, this );
	greenSlider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::onGreenSlider ), NULL, this );
	greenSlider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( frame::onGreenSlider ), NULL, this );
	greenSlider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::greenSliderOnRelease ), NULL, this );
	blueSlider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( frame::onBlueSlider ), NULL, this );
	blueSlider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( frame::onBlueSlider ), NULL, this );
	blueSlider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( frame::onBlueSlider ), NULL, this );
	blueSlider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( frame::onBlueSlider ), NULL, this );
	blueSlider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( frame::onBlueSlider ), NULL, this );
	blueSlider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( frame::onBlueSlider ), NULL, this );
	blueSlider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( frame::onBlueSlider ), NULL, this );
	blueSlider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::onBlueSlider ), NULL, this );
	blueSlider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( frame::onBlueSlider ), NULL, this );
	blueSlider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::blueSliderOnRelease ), NULL, this );
	redChannelSlider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( frame::redChannelSliderOnScroll ), NULL, this );
	redChannelSlider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( frame::redChannelSliderOnScroll ), NULL, this );
	redChannelSlider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( frame::redChannelSliderOnScroll ), NULL, this );
	redChannelSlider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( frame::redChannelSliderOnScroll ), NULL, this );
	redChannelSlider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( frame::redChannelSliderOnScroll ), NULL, this );
	redChannelSlider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( frame::redChannelSliderOnScroll ), NULL, this );
	redChannelSlider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( frame::redChannelSliderOnScroll ), NULL, this );
	redChannelSlider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::redChannelSliderOnScroll ), NULL, this );
	redChannelSlider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( frame::redChannelSliderOnScroll ), NULL, this );
	redChannelSlider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::redChannelSliderOnRelease ), NULL, this );
	greenChannelSlider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( frame::greenChannelSliderOnScroll ), NULL, this );
	greenChannelSlider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( frame::greenChannelSliderOnScroll ), NULL, this );
	greenChannelSlider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( frame::greenChannelSliderOnScroll ), NULL, this );
	greenChannelSlider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( frame::greenChannelSliderOnScroll ), NULL, this );
	greenChannelSlider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( frame::greenChannelSliderOnScroll ), NULL, this );
	greenChannelSlider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( frame::greenChannelSliderOnScroll ), NULL, this );
	greenChannelSlider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( frame::greenChannelSliderOnScroll ), NULL, this );
	greenChannelSlider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::greenChannelSliderOnScroll ), NULL, this );
	greenChannelSlider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( frame::greenChannelSliderOnScroll ), NULL, this );
	greenChannelSlider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::greenChannelSliderOnRelease ), NULL, this );
	blueChannelSlider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( frame::blueChannelSliderOnScroll ), NULL, this );
	blueChannelSlider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( frame::blueChannelSliderOnScroll ), NULL, this );
	blueChannelSlider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( frame::blueChannelSliderOnScroll ), NULL, this );
	blueChannelSlider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( frame::blueChannelSliderOnScroll ), NULL, this );
	blueChannelSlider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( frame::blueChannelSliderOnScroll ), NULL, this );
	blueChannelSlider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( frame::blueChannelSliderOnScroll ), NULL, this );
	blueChannelSlider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( frame::blueChannelSliderOnScroll ), NULL, this );
	blueChannelSlider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::blueChannelSliderOnScroll ), NULL, this );
	blueChannelSlider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( frame::blueChannelSliderOnScroll ), NULL, this );
	blueChannelSlider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::blueChannelSliderOnRelease ), NULL, this );
	bichromeCheckBox->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( frame::bichromeOnCheck ), NULL, this );
	bichromeColorPicker->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( frame::bichromeOnColorChange ), NULL, this );
	imagePanel->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( frame::onUpdate ), NULL, this );
	menuFile->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frame::onOpen ), this, menuFileOpen->GetId());
	menuFile->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frame::onSave ), this, menuFileSave->GetId());
	menuFile->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frame::onLoadParams ), this, menuFileLoadParams->GetId());
	menuFile->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frame::onSaveParams ), this, menuFileSaveParams->GetId());
	menuFile->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frame::onQuit ), this, menuFileQuit->GetId());
	menuEdit->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frame::onUndo ), this, menuEditUndo->GetId());
	menuEdit->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frame::onRedo ), this, menuEditRedo->GetId());
	menuHelp->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frame::onAbout ), this, menuHelpAbout->GetId());
}

frame::~frame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( frame::onClose ) );
	redSlider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( frame::onRedSlider ), NULL, this );
	redSlider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( frame::onRedSlider ), NULL, this );
	redSlider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( frame::onRedSlider ), NULL, this );
	redSlider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( frame::onRedSlider ), NULL, this );
	redSlider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( frame::onRedSlider ), NULL, this );
	redSlider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( frame::onRedSlider ), NULL, this );
	redSlider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( frame::onRedSlider ), NULL, this );
	redSlider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::onRedSlider ), NULL, this );
	redSlider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( frame::onRedSlider ), NULL, this );
	redSlider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::redSliderOnRelease ), NULL, this );
	greenSlider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( frame::onGreenSlider ), NULL, this );
	greenSlider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( frame::onGreenSlider ), NULL, this );
	greenSlider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( frame::onGreenSlider ), NULL, this );
	greenSlider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( frame::onGreenSlider ), NULL, this );
	greenSlider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( frame::onGreenSlider ), NULL, this );
	greenSlider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( frame::onGreenSlider ), NULL, this );
	greenSlider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( frame::onGreenSlider ), NULL, this );
	greenSlider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::onGreenSlider ), NULL, this );
	greenSlider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( frame::onGreenSlider ), NULL, this );
	greenSlider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::greenSliderOnRelease ), NULL, this );
	blueSlider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( frame::onBlueSlider ), NULL, this );
	blueSlider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( frame::onBlueSlider ), NULL, this );
	blueSlider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( frame::onBlueSlider ), NULL, this );
	blueSlider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( frame::onBlueSlider ), NULL, this );
	blueSlider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( frame::onBlueSlider ), NULL, this );
	blueSlider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( frame::onBlueSlider ), NULL, this );
	blueSlider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( frame::onBlueSlider ), NULL, this );
	blueSlider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::onBlueSlider ), NULL, this );
	blueSlider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( frame::onBlueSlider ), NULL, this );
	blueSlider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::blueSliderOnRelease ), NULL, this );
	redChannelSlider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( frame::redChannelSliderOnScroll ), NULL, this );
	redChannelSlider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( frame::redChannelSliderOnScroll ), NULL, this );
	redChannelSlider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( frame::redChannelSliderOnScroll ), NULL, this );
	redChannelSlider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( frame::redChannelSliderOnScroll ), NULL, this );
	redChannelSlider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( frame::redChannelSliderOnScroll ), NULL, this );
	redChannelSlider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( frame::redChannelSliderOnScroll ), NULL, this );
	redChannelSlider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( frame::redChannelSliderOnScroll ), NULL, this );
	redChannelSlider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::redChannelSliderOnScroll ), NULL, this );
	redChannelSlider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( frame::redChannelSliderOnScroll ), NULL, this );
	redChannelSlider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::redChannelSliderOnRelease ), NULL, this );
	greenChannelSlider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( frame::greenChannelSliderOnScroll ), NULL, this );
	greenChannelSlider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( frame::greenChannelSliderOnScroll ), NULL, this );
	greenChannelSlider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( frame::greenChannelSliderOnScroll ), NULL, this );
	greenChannelSlider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( frame::greenChannelSliderOnScroll ), NULL, this );
	greenChannelSlider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( frame::greenChannelSliderOnScroll ), NULL, this );
	greenChannelSlider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( frame::greenChannelSliderOnScroll ), NULL, this );
	greenChannelSlider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( frame::greenChannelSliderOnScroll ), NULL, this );
	greenChannelSlider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::greenChannelSliderOnScroll ), NULL, this );
	greenChannelSlider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( frame::greenChannelSliderOnScroll ), NULL, this );
	greenChannelSlider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::greenChannelSliderOnRelease ), NULL, this );
	blueChannelSlider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( frame::blueChannelSliderOnScroll ), NULL, this );
	blueChannelSlider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( frame::blueChannelSliderOnScroll ), NULL, this );
	blueChannelSlider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( frame::blueChannelSliderOnScroll ), NULL, this );
	blueChannelSlider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( frame::blueChannelSliderOnScroll ), NULL, this );
	blueChannelSlider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( frame::blueChannelSliderOnScroll ), NULL, this );
	blueChannelSlider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( frame::blueChannelSliderOnScroll ), NULL, this );
	blueChannelSlider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( frame::blueChannelSliderOnScroll ), NULL, this );
	blueChannelSlider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::blueChannelSliderOnScroll ), NULL, this );
	blueChannelSlider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( frame::blueChannelSliderOnScroll ), NULL, this );
	blueChannelSlider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( frame::blueChannelSliderOnRelease ), NULL, this );
	bichromeCheckBox->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( frame::bichromeOnCheck ), NULL, this );
	bichromeColorPicker->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( frame::bichromeOnColorChange ), NULL, this );
	imagePanel->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( frame::onUpdate ), NULL, this );

}
