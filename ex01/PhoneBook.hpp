//
// Created by Josias Mutshaila kasongo on 2022-08-09.
//

#ifndef EX01_PHONEBOOK_H
#define EX01_PHONEBOOK_H
#include <iostream>
#include "Contact.hpp"

namespace PhoneBook {

	class PhoneBook {
		private:
			Contact::Contact contacts[8];
		public:
			PhoneBook();
			~PhoneBook();
			void add(void);
			void search(void) const;
	};

} // PhoneBook

#endif //EX01_PHONEBOOK_H
