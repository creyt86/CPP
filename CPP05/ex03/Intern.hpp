/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:01:54 by creyt             #+#    #+#             */
/*   Updated: 2023/03/30 11:02:16 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <exception>
# include <stdexcept>

class Intern;
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	public :
		Intern();
		Intern(std::string name, int grade);
		~Intern();
		Intern(Intern const &cpy);
		Intern &operator=(Intern const &rhs);

		AForm*	makeForm(std::string formName, std::string formTarget);

};

std::ostream	&operator<<(std::ostream &out, const Intern &obj);

#endif
