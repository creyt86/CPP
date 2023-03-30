/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:31:29 by creyt             #+#    #+#             */
/*   Updated: 2023/03/30 10:44:04 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <exception>
# include <stdexcept>

class AForm;
# include "Bureaucrat.hpp"

class AForm {
private :
	std::string	const _name;
	bool	_signed;
	int		const _signGrade;
	int		const _execGrade;

public :
	AForm();
	virtual ~AForm();
	AForm(std::string name, int signGrade, int execGrade);
	AForm(AForm const &copy);
	AForm &operator=(AForm const &assign);

	void		beSigned(Bureaucrat &obj);
	virtual void execute(Bureaucrat const &executor) const = 0;

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

	class SignException : public std::exception {
		public:
			virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const AForm &obj);

#endif
