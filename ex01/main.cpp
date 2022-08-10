//
// Created by Josias Mutshaila kasongo on 2022-08-09.
//

#include <iostream>
#include "PhoneBook.hpp"

int main(void){
	std::string cmd;
	PhoneBook::PhoneBook carnet;
	do{
		std::cout << "\033[0;32mEntrer un commande:\033[0m ";
		std::getline(std::cin, cmd);
		std::cout << std::endl;
		if (cmd == "ADD"){
			carnet.add();
		}
		else if (cmd == "SEARCH"){
			carnet.search();
		}
		else if (cmd != "EXIT"){
			std::cout << "Entrer une commande valide: ADD, SEARCH ou EXIT" << std::endl;
		}
	}while (cmd != "EXIT");
	return (0);
}