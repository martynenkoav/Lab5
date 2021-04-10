#pragma once
#include "Bill.h"
#include <time.h>
class Credit_account: virtual public Bill
{
protected:
	int limit;
public:
	Credit_account(int new_limit, int new_ID) {
		ID = new_ID;
		limit = new_limit;
		now = time(0);
		operList.insert(std::unordered_map<time_t, int>::value_type(now, sum));
	}
	void cut(int);
	/*void trans(int, int, IBank);*/
	void add(int);
};

