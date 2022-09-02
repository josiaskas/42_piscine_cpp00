//
// Created by Josias Mutshaila kasongo on 2022-08-09.
//

#include "Contact.hpp"

namespace Contact {
	Contact::Contact(void) : _firstName(""), _lastName(""), _nickName(""), _phoneNumber(""), _darkestSecret(""), _isFilled(false)
	{

	}
	Contact::~Contact(void)
	{
	}

	bool Contact::getIsFilled() const
	{
		return _isFilled;
	}

	std::string Contact::getFirstName() const
	{
		return _firstName;
	}

	std::string Contact::getLastName() const
	{
		return _lastName;
	}

	std::string Contact::getNickName() const
	{
		return _nickName;
	}

	std::string Contact::getPhoneNumber() const
	{
		return _phoneNumber;
	}

	std::string Contact::getDarkestSecret() const
	{
		return _darkestSecret;
	}


	void Contact::setFirstName(std::string firstName)
	{
		_firstName = firstName;
	}

	void Contact::setLastName(std::string lastName)
	{
		_lastName = lastName;
	}

	void Contact::setNickName(std::string nickname)
	{
		_nickName = nickname;
	}

	void Contact::setPhoneNumber(std::string phoneNumber)
	{
		_phoneNumber = phoneNumber;
	}

	void Contact::setDarkestSecret(std::string darkestSecret)
	{
		_darkestSecret = darkestSecret;
	}


	inline void Contact::printInCol(const std::string &word) const
	{
		if (word.length() < 10)
		{
			std::cout << std::setw(10) << word << '|';
			return;
		}
		std::cout << std::setw(10) << word.substr(0, 9) + '.' << '|';
	}

	void Contact::showContact(e_showFormat format, int index) const
	{
		if (_isFilled)
		{
			if (format == FULL)
			{
				std::cout << "First Name: " << this->_firstName << std::endl;
				std::cout << "Last Name: " << this->_lastName << std::endl;
				std::cout << "Nickname: " << this->_nickName << std::endl;
				std::cout << "Phone Number: " << this->_phoneNumber << std::endl;
				std::cout << "Darkest Secret: " << this->_darkestSecret << std::endl;
			}
			else
			{
				std::cout << std::setw(10) << index << '|';
				printInCol(this->_firstName);
				printInCol(this->_lastName);
				printInCol(this->_nickName);
				std::cout << std::endl;
			}
		}
	}

	std::string Contact::getValue(const std::string &field) const
	{
		std::string str_readed;

		do
		{
			std::cout << field <<": ";
			std::getline(std::cin, str_readed);
			std::cout << std::endl;
			if (str_readed.length() > 0)
				break;
		} while (str_readed.length() == 0);

		return (str_readed);
	}

	bool Contact::fillContact(void)
	{
		_isFilled = false;

		_firstName = getValue("FirstName");
		_lastName = getValue("LastName");
		_nickName = getValue("NickName");
		_phoneNumber = getValue("Phone Number");
		_darkestSecret = getValue("Darkest Secret");
		_isFilled = true;
		return (_isFilled);
	}
} // Contact
