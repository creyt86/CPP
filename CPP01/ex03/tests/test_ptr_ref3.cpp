/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ptr_ref3.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:03:02 by creyt             #+#    #+#             */
/*   Updated: 2023/02/07 14:02:56 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// une reference est pointeur qui est constant et toujours deference

#include <iostream>
#include <string>

class	Student
{
	private:
		std::string _login;
	public:
		Student(std::string const & login) : _login(login)
		{
		}

		std::string&	getLoginRef()
		{
			return this->_login;
		}

		std::string const & getLoginRefConst() const
		{
			return this->_login;
		}
		std::string*	getLoginPtr()
		{
			return &(this->_login);
		}
		std::string const * getLoginPtrConst() const
		{
			return &(this->_login);
		}
};

int	main(void)
{
	Student	bob = Student("bfubar");
	Student const	jim = Student("jfubar");

	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

	bob.getLoginRef() = "bobfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

	*(bob.getLoginPtr()) = "bobbyfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

}
