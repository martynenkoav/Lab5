#pragma once
#include <string>
#include "Client.h"

class ClientBuilder : public Client
{
protected:
	std::string name;
	std::string second_name;
	std::string address;
	std::string passport;
public:
	ClientBuilder * Set_name(std::string new_name) {
		this->name = new_name;
		return this;
	};
	ClientBuilder * Set_second_name(std::string new_name) {
		this->second_name = new_name;
		return this;
	};
	ClientBuilder * Set_address(std::string new_name) {
		this->address = new_name;
		return this;
	};
	ClientBuilder * Set_passport(std::string new_name) {
		this->passport = new_name;
		return this;
	};
	Client Build() {
		return *new Client(name, second_name, address, passport);
	};
	
};

