// stdafx.cpp : source file that includes just the standard includes
//	CadSurf.pch will be the pre-compiled header
//	stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// ���ܣ���״̬���ϸ����������̵���ʾ��Ϣ
void Prompt(char* pmt)
{
	CStatusBar* pStatus=(CStatusBar*)
		AfxGetApp()->m_pMainWnd->GetDescendantWindow(ID_VIEW_STATUS_BAR);

	ASSERT(pStatus) ;
	if(pStatus)
		pStatus->SetPaneText(0, pmt, TRUE);
}