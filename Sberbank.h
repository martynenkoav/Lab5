#pragma once
#include "IBank.h"
class Sberbank: virtual public IBank
{
public:
	Sberbank() {
		name = "Sberbank";
		percent = 10;
		commission = 11;
	}
};

