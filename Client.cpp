#include "Client.h"
#include <iostream>

std::string Client::Get_name() {
	return name;
}

std::string Client::Get_second_name() {
	return second_name;
}

std::string Client::Get_address() {
	return address;
}

std::string Client::Get_passport() {
	return passport;
}

void Client::Set_name(std::string new_name) {
	name = new_name;
}

void Client::Set_second_name(std::string new_second_name) {
	second_name = new_second_name;
}

void Client::Set_address(std::string new_address) {
	address = new_address;
}

void  Client::Set_passport(std::string new_passport) {
	passport = new_passport;
}

//void Client::Create(std::string new_name, std::string new_second_name, std::string answer) {
//	std::string new_address;
//	std::string new_passport;
//	Set_name(new_name);
//	Set_second_name(second_name);
//	if (answer == "yes") {
//		std::cin >> new_address;
//		std::cin >> new_passport;
//	}
//}