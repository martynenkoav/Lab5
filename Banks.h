#pragma once
#include <list>
#include "IBank.h"
class Banks
{
public:
	Banks() {

	}
	std::unordered_map<int, Bill> bills;
	std::vector<Client> Clients;
	std::vector<IBank> banklist;
	void add(IBank);
};

