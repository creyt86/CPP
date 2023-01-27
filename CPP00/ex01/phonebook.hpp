/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:08:01 by creyt             #+#    #+#             */
/*   Updated: 2023/01/27 09:55:17 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <limits.h>
# include <iostream>
# include <iomanip>
# include <string>
# include "contact.hpp"



class PhoneBook {

	public:
			PhoneBook(void);
			~PhoneBook(void);

			void	newContact();
	private:

	Contact contact[8];
	int		_Nbcontact;
};

#endif
