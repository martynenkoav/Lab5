#include "Credit_account.h"

void Credit_account::cut(int new_sum) {
	if (sum - new_sum >= limit) {
		sum = sum - new_sum;
		now = time_t(0);
		operList.insert(std::unordered_map<time_t, int>::value_type(now, sum));
	}
	else {
		throw std::exception("There is the limit");
	}
}

//void Credit_account::trans(int new_sum, int other_ID, IBank bank) {
//	cut(new_sum);
//	sum = sum - new_sum;
//	now = time_t(0);
//	operList.insert(std::unordered_map<time_t, int>::value_type(now, sum));
//	std::vector<std::pair<Bill, Client>>::iterator it1;
//	it1 = bank.listbill.begin();
//	for (it1; it1 != bank.listbill.end(); ++it1) {
//		if (it1->first.ID == other_ID) {
//			it1->first.sum = it1->first.sum + new_sum;
//			it1->first.operList.insert(std::unordered_map<time_t, int>::value_type(now, it1->first.sum));
//		}
//	}
//}

void Credit_account::add(int new_sum) {
	sum = sum + new_sum;
	now = time_t(0);
	operList.insert(std::unordered_map<time_t, int>::value_type(now, sum));
}
