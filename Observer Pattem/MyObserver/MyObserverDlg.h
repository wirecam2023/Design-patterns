
// MyObserverDlg.h : 头文件
//

#pragma once
#include "afxwin.h"
#include <memory>
#include "WeatherData.h"


// CMyObserverDlg 对话框
class CMyObserverDlg : public CDialogEx
{
// 构造
public:
	CMyObserverDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MYOBSERVER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();

	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	CButton m_BtnObserver;
public:
	afx_msg void OnBnClickedButtonObserver();
public:
	CWeatherData* m_pWeatherData;

};
