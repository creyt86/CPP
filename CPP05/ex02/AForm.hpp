/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:31:29 by creyt             #+#    #+#             */
/*   Updated: 2023/03/24 13:40:46 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <stdexcept>

class AForm;
# include "Bureaucrat.hpp"

class AForm
{
	public:
			AForm();
			AForm(std::string name, int gradeSign, int gradeExec);
			AForm(AForm const &cpy);
			AForm &operator=(AForm const &rhs);
			virtual ~AForm();

			std::string	getName()const;
			int		getGradeSign()const;
			int		getGradeExec()const;
			bool	getSign()const;

			void			beSigned(Bureaucrat Bureaucrat);
			virtual void	execute(Bureaucrat const &executor) const = 0;

			class GradeTooHighException : public std::exception
			{
				public:
						virtual const char *what() const throw();
			};

			class GradeTooLowException : public std::exception
			{
				public:
						virtual const char *what() const throw();
			};
			class SignException : public std::exception
			{
				public:
						const char* AForm::SignException::what() const throw();
			};

	private:
			std::string const	_name;
			bool				_signed;
			int const			_gradeSign;
			int const			_gradeExec;
};

std::ostream &operator<<(std::ostream &out, const AForm &obj);


#endif
