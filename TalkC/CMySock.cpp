#include "pch.h"
#include "CMySock.h"
#include "TalkCDlg.h"

CMySock::CMySock()
{
}

CMySock::~CMySock()
{
}


void CMySock::OnReceive(int nErrorCode)
{
	((CTalkCDlg*)m_pDlg)->OnReceive();
	CAsyncSocket::OnReceive(nErrorCode);
}


void CMySock::SetParent(CDialog* pDlg)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	m_pDlg = pDlg;
}


void CMySock::OnClose(int nErrorCode)
{
	// TODO: �ڴ����ר�ô����/����û���
	((CTalkCDlg*)m_pDlg)->OnClickedButtonClose();
	CAsyncSocket::OnClose(nErrorCode);
}
