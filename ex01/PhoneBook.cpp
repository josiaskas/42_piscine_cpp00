//
// Created by Josias Mutshaila kasongo on 2022-08-09.
//
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _cursor(0)
{}

PhoneBook::~PhoneBook()
{};

void PhoneBook::add(void)
{
	bool isAdded = false;
	for (int i = 0; i < BOOK_SIZE; ++i)
	{
		if (!_contacts[i].getIsFilled())
		{
			_contacts[i].fillContact();
			isAdded = true;
			_cursor++;
			break;
		}
	}
	if (!isAdded)
	{
		_contacts[_cursor % BOOK_SIZE].fillContact();
		_cursor++;
	}
}

void PhoneBook::search() const
{
	int selected = 0;
	int filled = 0;
	std::cout << std::setw(10) << "Index" << '|';
	std::cout << std::setw(10) << "First name" << '|';
	std::cout << std::setw(10) << "Last name" << '|';
	std::cout << std::setw(10) << "Nickname" << '|' << std::endl;
	for (int i = 0; i < BOOK_SIZE; ++i)
	{
		_contacts[i].showContact(Contact::COLUMN, i);
		if (_contacts[i].getIsFilled())
		{
			filled++;
		}
	}
	if (filled == 0)
	{
		std::cout << "     Aucun Contact" << std::endl;
		return;
	}
	do
	{
		std::string val;
		std::cout
				<< "\033[0;32mEntrer l’index du contact à afficher: \033[0m";
		std::getline(std::cin, val);
		if (val.length() == 1 && std::isdigit(val[0]))
		{
			selected = std::stoi(val);
		}
		else
		{
			selected = 9;
		}
		std::cout << std::endl;
		if (selected >= 0 && selected < filled)
		{
			_contacts[selected].showContact(Contact::FULL, selected);
		}
		else
		{
			std::cout
					<< "\033[0;31mLe format de l'index est incorrect\033[0m"
					<< std::endl;
		}
	} while (selected < 0 || selected >= filled);
}
