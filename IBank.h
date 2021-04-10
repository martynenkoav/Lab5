#pragma once
#include <unordered_map>
#include "Client.h"
#include "Bill.h"

class IBank: public Bill
{
public:
	std::string name;
	double percent;
	int commission;
	 //первый параметр номер счёта, скорее всего нужно будет заменить на класс счёт

	std::unordered_map<int , std::pair<Bill, Client>> listbill;
	IBank() {
		name = '0';
		percent = 0;
		commission = 0;
	}
	void Add(Bill, Client);
	void Show();
	//void Find(int);
	/*auto Find_client(int);*/
};

