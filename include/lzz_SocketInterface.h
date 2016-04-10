#pragma once
#include "base.h"
#define _IOCP_

class lzz_SocketInterface
{
public:
	lzz_SocketInterface();

	virtual ~lzz_SocketInterface();
	/*�ȴ�TCP����*/
    virtual void Accept(SOCKET *s,SOCKADDR *address);
	/*������Ϣ*/
	virtual bool TcpSend(void *pData, int len);
	/*������Ϣ*/
	virtual bool TcpSend(void *pData, int len, ActionType a);
	/*������Ϣ*/
	virtual bool TcpRecv(void *pData, int len);
	/*������Ϣ*/
	virtual void UdpSend(void* pData, int len, ActionType at, SOCKADDR* pAddress);
	/*������Ϣ*/
	virtual void UdpSend(void *pData, int len, ActionType at);
	/*������Ϣ*/
	virtual void UdpRecv(void *pData, int len, SOCKADDR *pAddress);
protected:
	static WSADATA wsa;
private:
	static int SocketStartup;
	static int SocketLen;
};
