#pragma once
#include "../include/base.h"
namespace ClientType {
	enum lzz_ClientType_
	{
		  None = 0 //�޷�ʶ���ǰ��
		, IOS = 1//ƻ���ֻ�
		, Android = 2//��׿�ֻ�
	};
}

typedef ClientType::lzz_ClientType_ lzz_ClientType;//���¶���ö������
class lzz_UserModle
{
private:
	 SOCKADDR addr;
	 lzz_ClientType clientType;
public:
	lzz_UserModle();
	lzz_UserModle(lzz_ClientType *ct,SOCKADDR* userAddress);
	void setAddr(SOCKADDR *);
	void setClientType(lzz_ClientType *ct);
	SOCKADDR* getAddr();
	~lzz_UserModle();
};

