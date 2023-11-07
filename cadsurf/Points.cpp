// Points.cpp: 实现文件
//

#include "stdafx.h"
#include "CadSurf.h"
#include "afxdialogex.h"
#include "Points.h"

#include "GLView.h"



// Points 对话框

IMPLEMENT_DYNAMIC(Points, CDialogEx)

Points::Points(CWnd* pParent /*=nullptr*/) : CDialogEx(IDD_Points, pParent)
{
}

Points::~Points()
{
}

void Points::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, cpMat[0][0][0]);
	DDX_Text(pDX, IDC_EDIT3, cpMat[0][0][1]);
	DDX_Text(pDX, IDC_EDIT6, cpMat[0][0][2]);
	DDX_Text(pDX, IDC_EDIT7, cpMat[0][1][0]);
	DDX_Text(pDX, IDC_EDIT8, cpMat[0][1][1]);
	DDX_Text(pDX, IDC_EDIT4, cpMat[0][1][2]);
	DDX_Text(pDX, IDC_EDIT9, cpMat[0][2][0]);
	DDX_Text(pDX, IDC_EDIT5, cpMat[0][2][1]);
	DDX_Text(pDX, IDC_EDIT10, cpMat[0][2][2]);
	DDX_Text(pDX, IDC_EDIT11, cpMat[0][3][0]);
	DDX_Text(pDX, IDC_EDIT12, cpMat[0][3][1]);
	DDX_Text(pDX, IDC_EDIT13, cpMat[0][3][2]);
	DDX_Text(pDX, IDC_EDIT22, cpMat[1][0][0]);
	DDX_Text(pDX, IDC_EDIT15, cpMat[1][0][1]);
	DDX_Text(pDX, IDC_EDIT16, cpMat[1][0][2]);
	DDX_Text(pDX, IDC_EDIT24, cpMat[1][1][0]);
	DDX_Text(pDX, IDC_EDIT17, cpMat[1][1][1]);
	DDX_Text(pDX, IDC_EDIT19, cpMat[1][1][2]);
	DDX_Text(pDX, IDC_EDIT20, cpMat[1][2][0]);
	DDX_Text(pDX, IDC_EDIT14, cpMat[1][2][1]);
	DDX_Text(pDX, IDC_EDIT23, cpMat[1][2][2]);
	DDX_Text(pDX, IDC_EDIT21, cpMat[1][3][0]);
	DDX_Text(pDX, IDC_EDIT18, cpMat[1][3][1]);
	DDX_Text(pDX, IDC_EDIT25, cpMat[1][3][2]);
	DDX_Text(pDX, IDC_EDIT2, cpMat[2][0][0]);
	DDX_Text(pDX, IDC_EDIT26, cpMat[2][0][1]);
	DDX_Text(pDX, IDC_EDIT27, cpMat[2][0][2]);
	DDX_Text(pDX, IDC_EDIT28, cpMat[2][1][0]);
	DDX_Text(pDX, IDC_EDIT29, cpMat[2][1][1]);
	DDX_Text(pDX, IDC_EDIT30, cpMat[2][1][2]);
	DDX_Text(pDX, IDC_EDIT31, cpMat[2][2][0]);
	DDX_Text(pDX, IDC_EDIT32, cpMat[2][2][1]);
	DDX_Text(pDX, IDC_EDIT33, cpMat[2][2][2]);
	DDX_Text(pDX, IDC_EDIT34, cpMat[2][3][0]);
	DDX_Text(pDX, IDC_EDIT35, cpMat[2][3][1]);
	DDX_Text(pDX, IDC_EDIT36, cpMat[2][3][2]);
	DDX_Text(pDX, IDC_EDIT37, cpMat[3][0][0]);
	DDX_Text(pDX, IDC_EDIT38, cpMat[3][0][1]);
	DDX_Text(pDX, IDC_EDIT39, cpMat[3][0][2]);
	DDX_Text(pDX, IDC_EDIT40, cpMat[3][1][0]);
	DDX_Text(pDX, IDC_EDIT41, cpMat[3][1][1]);
	DDX_Text(pDX, IDC_EDIT42, cpMat[3][1][2]);
	DDX_Text(pDX, IDC_EDIT43, cpMat[3][2][0]);
	DDX_Text(pDX, IDC_EDIT44, cpMat[3][2][1]);
	DDX_Text(pDX, IDC_EDIT45, cpMat[3][2][2]);
	DDX_Text(pDX, IDC_EDIT46, cpMat[3][3][0]);
	DDX_Text(pDX, IDC_EDIT47, cpMat[3][3][1]);
	DDX_Text(pDX, IDC_EDIT48, cpMat[3][3][2]);
}


BEGIN_MESSAGE_MAP(Points, CDialogEx)
	ON_BN_CLICKED(IDOK, &Points::OnBnClickedOk)
	ON_EN_CHANGE(IDC_EDIT33, &Points::OnEnChangeEdit33)
END_MESSAGE_MAP()




void Points::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CDialogEx::OnOK();
}


void Points::OnEnChangeEdit33()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
