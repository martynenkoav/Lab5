#pragma once
#include <unordered_map>


class Bill
{
public:
	int ID;
	int sum;
	time_t now;
	std::unordered_map < time_t , int > operList;
	Bill() {
		sum = 0;
		ID = 0;
		now = 0;
	}
	int get_sum();
	int get_ID();
	void set_sum(int);
	void cut();
	void add();
	void trans();
	void add_percent();
};

