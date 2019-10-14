//---------------------------------------------------------------------------
//
// Name:        WindChillIndexApp.h
// Author:      Oxygen
// Created:     2017/8/19 ¤U¤È 07:13:29
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __WINDCHILLINDEXFRMApp_h__
#define __WINDCHILLINDEXFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class WindChillIndexFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
