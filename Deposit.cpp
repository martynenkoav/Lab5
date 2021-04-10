#include "Deposit.h"

void Deposit::cut(int new_sum) {
	//добавить проверку даты
	throw std::exception("You cannot do this with deposit");
}

void Deposit::trans(int new_sum, int new_ID, std::string Bank_name) {
	//добавить проверку даты
	throw std::exception("You cannot do this with deposit");
}

void Deposit::add(int new_sum) {
	sum = sum + new_sum;
	now = time_t(0);
	operList.insert(std::unordered_map<time_t, int>::value_type(now, sum));
}