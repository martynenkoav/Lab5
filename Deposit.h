#pragma once
#include "Bill.h"
#include <time.h>
class Deposit : virtual public Bill
{
protected: 
	std::string date; //подумать как работать с датой
public:
	Deposit(int new_sum, int new_ID) {
		ID = new_ID;
		sum = new_sum;
		now = time(0);
		operList.insert(std::unordered_map<time_t, int>::value_type(now, new_sum));
	}
	void cut(int);
	void trans(int, int, std::string);
	void add(int);
};

