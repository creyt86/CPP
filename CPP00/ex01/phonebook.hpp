/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:08:01 by creyt             #+#    #+#             */
/*   Updated: 2023/01/31 11:25:10 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <limits.h>
# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

#define START "\n\tWelcome in 80's \n\nA few commands are available :\n"
#define COMMANDS "ADD\t: Add a new contact\nSEARCH\t: Search a contact\nEXIT\t: Exit the phonebook\n"
#define S_COL "*----------*----------*----------*----------*\n"
#define S_VOID "|          |          |          |          |\n"
#define S_IN "|     Index|First Name|  LastName|  Nickname|\n"
#define S_SEP "|----------|----------|----------|----------|\n"

class PhoneBook {

	public:
			PhoneBook(void);
			~PhoneBook(void);

			void	AddContact();
			void	PrintInfo(int nbr);
			void	PrintContact();

	private:

	Contact contact[8];
	int		_Nbcontact;
};

#endif
