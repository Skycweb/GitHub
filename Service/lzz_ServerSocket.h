#pragma once
#include "../include/base.h"
#include "../include/lzz_SocketInterface.h"

class lzz_ServerSocket:public lzz_SocketInterface
{
private:
	SOCKET sk = 0;
	WSADATA wsa;
	SOCKADDR_IN serverAddr;
	int serverAddr_len = sizeof(SOCKADDR_IN);
	/*
	类被删除的时候WSAStartup是否释放
	*/
	bool isDisponeSOCKET = false;
public:
	lzz_ServerSocket();
	lzz_ServerSocket(SOCKET *);

	void Accept(SOCKET* s, SOCKADDR* address) override;
	void TcpBind(int port);
	bool TcpSend(void *pData,int len) override;
	bool TcpRecv(void *pData,int len) override;
	void UdpBind(int port);
	void UdpSend(void* pData, int len, ActionType at, SOCKADDR* pAddress) override;
	void UdpRecv(void *pData,int len, SOCKADDR *pAddress) override;
	virtual ~lzz_ServerSocket();
};

