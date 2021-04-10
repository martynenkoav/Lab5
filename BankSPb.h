#pragma once
#include "IBank.h"
class BankSPb: virtual public IBank
{
public:
	BankSPb() {
		percent = 8;
		commission = 9;
	}
};


