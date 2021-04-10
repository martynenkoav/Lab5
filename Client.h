#pragma once
#include <string>
class Client
{
public:
	std::string name;
	std::string second_name;
	std::string address;
	std::string passport;  //уточнить в каком формате должен быть паспорт
	Client() {
		name = " ";
		second_name = " ";
	}
	Client(std::string new_name, std::string new_sec, std::string new_address, std::string new_passport) {
		name = new_name;
		second_name = new_sec;
		address = new_address;
		passport = new_passport;
	}
	std::string Get_name();
	std::string Get_second_name();
	std::string Get_address();
	std::string Get_passport();
	void Set_name(std::string);
	void Set_second_name(std::string);
	void Set_address(std::string);
	void Set_passport(std::string);
	/*void Create(std::string, std::string, std::string);*/
};

