#pragma once
#include "lzz_ClientSocket.h"
#include "../include/lzz_Thread.h"

class lzz_HeartbeatThread:public lzz_Thread
{
private:
	GUID guid_id;//ǰ��ΪһID
	bool *is_close_b_ = nullptr;//�Ƿ�ر�
	lzz_ClientSocket *sk = nullptr;//����
public:
	lzz_HeartbeatThread(lzz_ClientSocket *s);
	virtual ~lzz_HeartbeatThread();

	void Close() override;
	void run() override;
};

