/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:31:29 by creyt             #+#    #+#             */
/*   Updated: 2023/03/30 10:33:23 by creyt            ###   ########.fr       */
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
			~Form();
			Form(std::string name, int signGrade, int execGrade);
			Form(Form const &copy);
			Form &operator=(Form const &assign);

			void		beSigned(Bureaucrat &obj);

			std::string	getName() const;
			bool		getSign() const;
			int			getSignGrade() const;
			int			getExecGrade() const;

			class GradeTooHighException : public std::exception {
					public :
						virtual const char *what() const throw();
				};

				class GradeTooLowException : public std::exception {
					public :
						virtual const char *what() const throw();
				};

	private:
			std::string const	_name;
			bool				_signed;
			int		const _signGrade;
			int		const _execGrade;

};

std::ostream &operator<<(std::ostream &out, const Form &obj);


#endif
