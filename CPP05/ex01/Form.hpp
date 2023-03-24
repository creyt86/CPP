/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:31:29 by creyt             #+#    #+#             */
/*   Updated: 2023/03/21 15:13:36 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <stdexcept>

class Form;
# include "Bureaucrat.hpp"

class Form
{
	public:
			Form();
			Form(std::string name, int gradeSign, int gradeExec);
			Form(Form const &cpy);
			Form &operator=(Form const &rhs);
			~Form();

			std::string	getName()const;
			int		getGradeSign()const;
			int		getGradeExec()const;
			bool	getSign()const;

			void	beSigned(Bureaucrat Bureaucrat);

			class GradeTooHighException : public std::exception
			{
				virtual const char *what() const throw();
			};

			class GradeTooLowException : public std::exception
			{
				virtual const char *what() const throw();
			};

	private:
			std::string const	_name;
			bool				_signed;
			int const			_gradeSign;
			int const			_gradeExec;
};

std::ofstream &operator<<(std::ostream &out, const Form &obj);


#endif
