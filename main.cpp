#include <wx/wx.h>
#include "GUIframe.h"

class MyApp : public wxApp {

public:

 virtual bool OnInit();
 virtual int OnExit() { return 0; }

};

IMPLEMENT_APP(MyApp);

bool MyApp::OnInit() 
{
 GUIframe *mainFrame = new GUIframe(NULL);
 mainFrame->Show(true);
 SetTopWindow(mainFrame);


 return true;
}