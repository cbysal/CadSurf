


#pragma once
#include "afxwin.h"
#include "Light.h"


//

//int n;
// CLightDlg �Ի���

class CLightDlg : public CDialog
{
	DECLARE_DYNAMIC(CLightDlg)

public:
	BOOL CLightDlg::OnInitDialog();
	CLightDlg(CWnd* pParent = NULL);   // ��׼���캯��
	CSliderCtrl	m_X;
	CSliderCtrl	m_Y;
	CSliderCtrl	m_Z;
	CSliderCtrl	m_W;
	CSliderCtrl	m_S;
	CSliderCtrl	m_E;
	CSliderCtrl	m_C;
	double m_x;
	double m_y;
	double m_z;
	double m_w;
	double m_s;
	double m_e;
	double m_c;
	GLfloat  colrMat[4];
	//GLfloat  posiMat[10][4];
	CLight light[10];
	virtual ~CLightDlg();
	int n;
	bool close;

// �Ի�������
	enum { IDD = IDD_LIGHT };

	//CSliderCtrl	m_Z;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	afx_msg void OnReleasedcaptureSliderx(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnReleasedcaptureSlidery(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnReleasedcaptureSliderz(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMReleasedcaptureSliderw(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMReleasedcaptureSliders(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMReleasedcaptureSlidere(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMReleasedcaptureSliderc(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedOk();
	DECLARE_MESSAGE_MAP()
public:
	
	
	
	
	afx_msg void OnBnClickedSetcolor();
	CListBox m_listliht;
	afx_msg void OnBnClickedButtonnew();
	afx_msg void OnBnClickedButtondelete();
};

