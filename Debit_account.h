#pragma once
#include "Bill.h"
#include <time.h>
class Debit_account: virtual public Bill
{
protected:
	int per;
//	double new_percent = percent / 365; //округление
public:
	Debit_account(int new_sum, int new_ID) {
		ID = new_ID;
		sum = new_sum;
		now=time(0);
		operList.insert(std::unordered_map<time_t, int>::value_type( now , new_sum));
	}
	void cut(int);
	void trans(int, int, std::string);
	void add(int);
	void add_percent(double, time_t);
};

