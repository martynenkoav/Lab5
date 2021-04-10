#include "IBank.h"
#include <exception>
#include <iostream>

void IBank::Add(Bill new_bill, Client new_Client)  {
	if ((new_Client.Get_name()!= "0" )&&(new_Client.Get_second_name()!= "0"))
		listbill.insert(std::make_pair(new_bill.ID , std::make_pair( new_bill, new_Client)));
	else {
		throw std::exception("No name or second name");
	}
}

void IBank::Show() {
	std::unordered_map<int,std::pair<Bill, Client>>::iterator it;
	it = listbill.begin();
	for (it; it != listbill.end(); ++it) {
		std::cout << it->second.first.get_ID() << "\n" << it->second.first.get_sum() << "\n";
	}
}

  //void IBank::Find(int new_ID) {
//	std::unordered_map<int, std::pair<Bill, Client>>::iterator it;
//	it = listbill.begin();
//	for (it; it != listbill.end(); ++it) {
//		if (it->first.get_ID() == new_ID) {
//			 it;
//			break;
//		}
//	}
//	if (res == 0) {
//		throw std::exception("There is no such account");
//	}
//	return it;
//
//}