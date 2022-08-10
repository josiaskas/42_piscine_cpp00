//
// Created by Josias Mutshaila kasongo on 2022-08-09.
//

#include "Contact.hpp"

namespace Contact {
	Contact::Contact(void):isFilled(false)
	{
	}
	Contact::~Contact(void)
	{
	}
	inline void Contact::printInCol(const std::string &word) const
	{
		if (word.length() < 10){
			std::cout << std::setw(10) << word << '|';
			return ;
		}
		std::cout << std::setw(10) << word.substr(0, 9) + '.' << '|';
	}
	void Contact::showContact(e_showFormat format, int index) const
	{
		if (this->isFilled){
			if (format == FULL){
				std::cout << "First Name: " << this->_firstName << std::endl;
				std::cout << "Last Name: " << this->_lastName << std::endl;
				std::cout << "Nickname: " << this->_nickName << std::endl;
				std::cout << "Phone Number: " << this->_phoneNumber << std::endl;
				std::cout << "Darkest Secret: " << this->_darkestSecret << std::endl;
			}
			else{
				std::cout << std::setw(10) << index << '|';
				printInCol(this->_firstName);
				printInCol(this->_lastName);
				printInCol(this->_nickName);
				std::cout << std::endl;
			}
		}
	}
	bool Contact::fillContact(void)
	{
		this->isFilled = false;
		std::cout << "First Name: ";
		std::getline(std::cin, this->_firstName);
		std::cout << std::endl << "Last Name: ";
		std::getline(std::cin, this->_lastName);
		std::cout << std::endl << "Nickname: ";
		std::getline(std::cin, this->_nickName);
		std::cout << std::endl << "Phone Number: ";
		std::getline(std::cin, this->_phoneNumber);
		std::cout << std::endl << "Darkest Secret: ";
		std::getline(std::cin, this->_darkestSecret);
		std::cout << std::endl;
		this->isFilled = true;
		return (this->isFilled);
	}
} // Contact