//
// Created by Josias Mutshaila kasongo on 2022-08-09.
//

#ifndef EX01_CONTACT_H
#define EX01_CONTACT_H
#include <iostream>
#include <iomanip>
namespace Contact {
	enum e_showFormat{
		COLUMN,
		FULL
	};
	class Contact {
		private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
		void printInCol(const std::string &word) const;
		public:
			Contact(void);
			~Contact(void);
			void showContact(e_showFormat format, int index) const;
			bool fillContact(void);
			bool isFilled;
	};

} // Contact

#endif //EX01_CONTACT_H
