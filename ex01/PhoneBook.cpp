//
// Created by Josias Mutshaila kasongo on 2022-08-09.
//
#include "PhoneBook.hpp"

namespace PhoneBook {
	PhoneBook::PhoneBook(){}
	PhoneBook::~PhoneBook(){};

	void PhoneBook::add(void){
		bool isAdded = false;
		for (int i = 0; i < 8; ++i)
		{
			if (!this->contacts[i].isFilled){
				this->contacts[i].fillContact();
				isAdded = true;
				break;
			}
		}
		if (!isAdded){
			this->contacts[0].fillContact();
		}
	}
	void PhoneBook::search() const{
		int selected = 0;
		int filled = 0;
		std::cout << std::setw(10) << "Index" << '|';
		std::cout << std::setw(10) << "First name" << '|';
		std::cout << std::setw(10) << "Last name" << '|';
		std::cout << std::setw(10) << "Nickname"<< '|'<< std::endl;
		for (int i = 0; i < 8; ++i){
			this->contacts[i].showContact(Contact::COLUMN, i);
			if (this->contacts[i].isFilled){
				filled++;
			}
		}
		if (filled == 0){
			std::cout << "Aucun Contact" << std::endl;
			return;
		}
		do{
			std::string val;
			std::cout << "\033[0;32mEntrer l’index du contact à afficher: \033[0m";
			std::getline(std::cin, val);
			if (val.length() == 1 && std::isdigit(val[0])){
				selected = std::stoi(val);
			}else{
				selected = 9;
			}
			std::cout << std::endl;
			if (selected >= 0 && selected < filled){
				this->contacts[selected].showContact(Contact::FULL, selected);
			}else{
				std::cout << "\033[0;31mLe format de l'index est incorrect\033[0m"<< std::endl;
			}
		}while(selected < 0 || selected >= filled);
	}
} // PhoneBook