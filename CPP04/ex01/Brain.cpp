/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:33:00 by creyt             #+#    #+#             */
/*   Updated: 2023/03/15 14:50:24 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < NB_IDEAS; ++i)
		ideas[i] = "You know nothing...";
	std::cout << "🧠 Brain is in brainstorming " << std::endl;
}

Brain::Brain(Brain const &cpy)
{
	*this = cpy;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain & Brain::operator=(Brain const &rhs)
{
	for (int i = 0; i < NB_IDEAS; ++i)
		// this->setIdea(assign.getIdea(i), i);
		ideas[i] = rhs.ideas[i];
	return *this;
	std::cout << "Brain assignment constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "🤯 Destructor Brain called" << std::endl;
}
