//
// Created by Josias Mutshaila kasongo on 2022-08-09.
//

#ifndef EX01_PHONEBOOK_H
#define EX01_PHONEBOOK_H
#include <iostream>
#include "Contact.hpp"
#define  BOOK_SIZE 8

namespace PhoneBook {
	class PhoneBook {
		private:
			Contact::Contact contacts[BOOK_SIZE];
			int cursor;
		public:
			PhoneBook();
			~PhoneBook();
			void add(void);
			void search(void) const;
	};

} // PhoneBook

#endif //EX01_PHONEBOOK_H
