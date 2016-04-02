#pragma once
#include "lzz_ClientSocket.h"
#include "../include/lzz_Thread.h"

class lzz_RunStart :
	public lzz_Thread
{
public:
	lzz_RunStart();
	lzz_ClientSocket *getSOCKET();
	void run() override;
	virtual ~lzz_RunStart();
private:
	bool *isRun = nullptr;//���п���
	lzz_ClientSocket *sk = new lzz_ClientSocket();
};

