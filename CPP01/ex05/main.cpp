/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:00:32 by creyt             #+#    #+#             */
/*   Updated: 2023/02/14 14:18:23 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	msg;

	msg.complain("DEBUG");
	msg.complain("INFO");
	msg.complain("WARNING");
	msg.complain("ERROR");
	return(1);
}
