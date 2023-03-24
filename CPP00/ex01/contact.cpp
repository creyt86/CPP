/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:27:40 by creyt             #+#    #+#             */
/*   Updated: 2023/01/27 10:03:41 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor Contact called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Destructor Contact called" << std::endl;
}

std::string	Contact::getFirstName(void) const
{
	return (_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (_lastName);
}

std::string	Contact::getNickName(void) const
{
	return(_nickName);
}

std::string Contact::getPhoneNumber(void) const
{
	return(_phoneNumber);
}

std::string Contact::getDarkestSecret(void) const
{
	return(_darkestSecret);
}

void	Contact::setFirstName(std::string str)
{
	_firstName = str;
}

void	Contact::setLastName(std::string str)
{
	_lastName = str;
}

void	Contact::setNickName(std::string str)
{
	_nickName = str;
}

void	Contact::setPhoneNumber(std::string str)
{
	_phoneNumber = str;
}

void	Contact::setDarkestSecret(std::string str)
{
	_darkestSecret = str;
}
