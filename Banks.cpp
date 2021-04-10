#include "Banks.h"

void Banks::add(IBank new_bank) {
	banklist.push_back(new_bank);
}



//std::string Banks::Find_bank(int new_ID) {
//	std::list<IBank> ::iterator it;
//	std::vector<std::pair<Bill, Client>>::iterator it1;
//	it = banklist.begin();
//	it1 = it->listbill.begin();
//	for (it; it != banklist.end(); ++it) {
//		it1 = it->listbill.begin();
//		for (it1; it1 != it->listbill.end(); ++it1) {
//			if (it1->first.get_ID() == new_ID) {
//				return it->name;
//				break;
//			}
//		}
//	}
//	return 0;
//}