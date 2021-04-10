#pragma once
#include "Banks.h"
class Transaction
{
public:
	int new_sum;
	int type; // 1 зачисление 2 -снятие  3 перевод
	int my_ID;
	int other_ID;
	IBank cur_bank;
	Transaction(int sum, int new_type, int new_ID, int new_other, IBank bank){
		new_sum = sum;
		type = new_type;
		my_ID = new_ID;
		other_ID = new_other;
		cur_bank = bank;
	} 
	void Trans(Banks);
	

};

