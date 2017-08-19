//---------------------------------------------------------------------------
//
// Name:        WindChillIndexApp.cpp
// Author:      Oxygen
// Created:     2017/8/19 ¤U¤È 07:13:29
// Description: 
//
//---------------------------------------------------------------------------

#include "WindChillIndexApp.h"
#include "WindChillIndexFrm.h"

IMPLEMENT_APP(WindChillIndexFrmApp)

bool WindChillIndexFrmApp::OnInit()
{
    WindChillIndexFrm* frame = new WindChillIndexFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int WindChillIndexFrmApp::OnExit()
{
	return 0;
}
