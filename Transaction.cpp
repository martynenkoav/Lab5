#include "Transaction.h"
#include <iostream>
#include "Banks.h"
#include "IBank.h"

void Transaction::Trans(Banks t) {
	//if (banklist.empty()) {
	//	throw std::exception("No banks");
	//}
	if (type ==1 ){
		cur_bank.listbill.find(my_ID)->second.first.sum= cur_bank.listbill.find(my_ID)->second.first.sum + new_sum;
		
		std::cout << cur_bank.listbill.find(my_ID)->second.first.sum;
		
		/*
		std::cout << m->first.ID;
		for (it; it != list.end(); ++it) {
			it1 = it->listbill.begin();
			
			for (it1; it1 != it->listbill.end(); ++it1) {
				if (it1->first.get_ID() == my_ID) {
					std::cout << new_sum;
					it1->first.sum = it1->first.sum + new_sum;
					std::cout << it1->first.sum << "\n";
					break;
				}
			}
		}*/

	}
	else {
		std::cout << "lox";
		throw std::exception("invalid type");
	}

	}

