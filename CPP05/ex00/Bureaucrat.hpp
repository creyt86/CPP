/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 08:50:29 by creyt             #+#    #+#             */
/*   Updated: 2023/03/21 11:18:56 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>
# include <stdexcept>

# define LOW "\e[31mToo low. Your are vired ! \e[0m"
# define HIGH "\033[34mYou get too high. Above the sky there is the sun but think about Icare... \e[0m"

class	Bureaucrat
{
	public :
			Bureaucrat();
			Bureaucrat(std::string name, int grade);
			Bureaucrat(Bureaucrat const &cpy);
			Bureaucrat &operator=(Bureaucrat const &rhs);
			~Bureaucrat();

			std::string	getName() const;
			int			getGrade() const;

			void	increaseGrade();
			void	decreaseGrade();

			class	GradeTooHighException : public std::exception
			{
				public :
							virtual const char *what() const throw();
			};

			class	GradeTooLowException : public std::exception
			{
				public :
							virtual const char *what() const throw();
			};

	private:
			std::string const	_name;
			int					_grade;
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj);

#endif
