//
// Created by Josias Mutshaila kasongo on 2022-08-09.
//

#ifndef EX01_PHONEBOOK_H
#define EX01_PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"

#define  BOOK_SIZE 8


class PhoneBook {
	private:
	Contact::Contact _contacts[BOOK_SIZE];
	int _cursor;

	public:
	PhoneBook();

	~PhoneBook();

	void add(void);

	void search(void) const;
};

#endif //EX01_PHONEBOOK_H
