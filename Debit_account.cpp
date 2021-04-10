#include "Debit_account.h"

//double Debit_account::get_percent() {
//	return new_percent;
//}

void Debit_account::cut(int new_sum) {
	now = time_t(0);
	if (sum - new_sum >= 0) {
		sum = sum - new_sum;
		operList.insert(std::unordered_map<time_t, int>::value_type(now, sum));
	}
	else {
		throw std::exception("insufficient funds");
	}
}

void Debit_account::trans(int new_sum, int other_ID, std::string Bank_name) {
	sum = sum - new_sum;
	now = time_t(0);
	operList.insert(std::unordered_map<time_t, int>::value_type(now, sum));
	//завести класс банков в котором будем передавать 
}

void Debit_account::add(int new_sum) {
	sum = sum + new_sum;
	now = time_t(0);
	operList.insert(std::unordered_map<time_t, int>::value_type(now, sum));
}

void Debit_account::add_percent(double percent, time_t cur_time) {
	time_t creation_time = operList.begin()->first;
	double day_percent = floor((percent / 365) * 100) / 100 / 100;
	double diff = floor((cur_time - creation_time)/60/60/24);
	while (diff >= 30) {
		per += sum * day_percent * 30; //возможно не сумма а сумма в первом элементе
		diff = diff - 30;
	}
}

