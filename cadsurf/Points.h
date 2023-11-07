#pragma once

#include "afxdialogex.h"
#include "afxwin.h"

// Points 对话框

class Points : public CDialogEx
{
	DECLARE_DYNAMIC(Points)

public:
	Points(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Points();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Points };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	double cpMat[4][4][3] = {{{20, 0, 200}, {0, 100, 150}, {-130, 100, 50}, {-250, 50, 0}},
							 {{100, 100, 150}, {30, 100, 100}, {-40, 100, 50}, {-110, 50, 0}},
							 {{280, 90, 140}, {110, 120, 80}, {0, 130, 30}, {-100, 150, -50}},
							 {{350, 30, 150}, {200, 150, 50}, {50, 200, 0}, {0, 100, -70}}};
	afx_msg void OnBnClickedOk();
	afx_msg void OnEnChangeEdit33();
};
