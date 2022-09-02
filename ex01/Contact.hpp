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
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		bool		_isFilled;
		void	printInCol(const std::string &word) const;
		std::string	getValue(const std::string &field) const;
		public:
			Contact(void);
			~Contact(void);

			// getters
			bool getIsFilled() const;
			std::string getFirstName(void) const;
			std::string getLastName(void) const;
			std::string getNickName(void) const;
			std::string getPhoneNumber(void) const;
			std::string getDarkestSecret(void) const;

			// setters
			void setFirstName(std::string firstName);
			void setLastName(std::string lastName);
			void setNickName(std::string nickname);
			void setPhoneNumber(std::string phoneNumber);
			void setDarkestSecret(std::string darkestSecret);

			void showContact(e_showFormat format, int index) const;
			bool fillContact(void);
	};

} // Contact

#endif //EX01_CONTACT_H
