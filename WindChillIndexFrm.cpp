///-----------------------------------------------------------------
///
/// @file      WindChillIndexFrm.cpp
/// @author    Oxygen
/// Created:   2017/8/19 下午 07:13:29
/// @section   DESCRIPTION
///            WindChillIndexFrm class implementation
///
///------------------------------------------------------------------

#include "WindChillIndexFrm.h"
#include "Wind_chill_effect.h"
//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
#include "C:/Users/Oxygen/Desktop/程式語言/C++/Wind chill effect/GUI/Images/WindChillIndexFrm_frmNewForm_XPM.xpm"
////Header Include End

//----------------------------------------------------------------------------
// WindChillIndexFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(WindChillIndexFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(WindChillIndexFrm::OnClose)
	EVT_BUTTON(ID_WXBUTTON3,WindChillIndexFrm::WxButton3Click)
	EVT_BUTTON(ID_WXBUTTON2,WindChillIndexFrm::WxButton2Click)
	EVT_BUTTON(ID_WXBUTTON1,WindChillIndexFrm::WxButton1Click)
END_EVENT_TABLE()
////Event Table End

WindChillIndexFrm::WindChillIndexFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

WindChillIndexFrm::~WindChillIndexFrm()
{
}

void WindChillIndexFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.

	////GUI Items Creation Start

	WxButton3 = new wxButton(this, ID_WXBUTTON3, _("About"), wxPoint(15, 103), wxSize(124, 24), 0, wxDefaultValidator, _("WxButton3"));

	WxStaticText3 = new wxStaticText(this, ID_WXSTATICTEXT3, _("Wind Speed (km/h)"), wxPoint(160, 11), wxDefaultSize, 0, _("WxStaticText3"));

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _("Temperature(°C)"), wxPoint(15, 11), wxDefaultSize, 0, _("WxStaticText2"));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("Wind-Chill Index:"), wxPoint(17, 67), wxDefaultSize, 0, _("WxStaticText1"));
	WxStaticText1->SetForegroundColour(wxColour(0,0,128));
	WxStaticText1->SetFont(wxFont(12, wxSWISS, wxNORMAL, wxNORMAL, false, _("Consolas")));

	WxEdit2 = new wxTextCtrl(this, Temp_box, _(""), wxPoint(160, 30), wxSize(120, 25), 0, wxDefaultValidator, _("WxEdit2"));

	WxEdit1 = new wxTextCtrl(this, ID_WXEDIT1, _(""), wxPoint(16, 30), wxSize(120, 25), 0, wxDefaultValidator, _("WxEdit1"));

	WxButton2 = new wxButton(this, ID_WXBUTTON2, _("Calculate"), wxPoint(154, 104), wxSize(137, 50), 0, wxDefaultValidator, _("WxButton2"));

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("Exit"), wxPoint(15, 130), wxSize(124, 24), 0, wxDefaultValidator, _("WxButton1"));

	SetTitle(_("Wind Chill Index"));
	SetIcon(WindChillIndexFrm_frmNewForm_XPM);
	SetSize(8,8,320,207);
	Center();
	
	////GUI Items Creation End
}

void WindChillIndexFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}


/*
 * Call Exit
 */
void WindChillIndexFrm::WxButton1Click(wxCommandEvent& event)
{
	// insert your code here
	exit(0);
}

/*
 * Call calculator
 */

void WindChillIndexFrm::WxButton2Click(wxCommandEvent& event)
{
	// insert your code here

	double Vwind = 0, Temp = 0;
    if(!WxEdit2->GetValue().ToDouble(&Vwind) || !WxEdit1->GetValue().ToDouble(&Temp)){
        MessageBox(NULL, _T("Please enter correct value!"), _T("Error"), wxICON_ERROR);
    }
    
    wxString AnsString = wxString::Format(wxT("Wind-Chill Index:%lf"), GetWindChillIndex(Vwind,Temp));                         
    WxStaticText1->SetLabel(AnsString);
}


/*
 * WxButton3Click
 */
void WindChillIndexFrm::WxButton3Click(wxCommandEvent& event)
{
	// insert your code here
	wxString About="By oxygen\nCompile time:2017/08/19\n\n這程式始於那迷濛的時期\n有著許多未被訴說的故事";
    MessageBox(NULL, About, _T("About"), wxICON_INFORMATION);
}
