/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:35:34 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/06 17:32:40 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <string>
#include <iostream>

Karen::Karen(void) {

	return ;
}

Karen::~Karen(void) {

	return ;
}

/*
**
*/

void	Karen::complain(std::string level) {

	static std::string	check_index[NB_LVL] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	static 	ft_karen 	f[NB_LVL] = { &Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};
	
	for (int i = 0; i < NB_LVL; i++)
	{
		if (level.compare(check_index[i]) == 0)
		{
			(this->*f[i])();
			return ;
		}	
	}
	std::cout << '"' << level << '"' << " is not an error" << std::endl;
}


/*
**
*/

void	Karen::_debug(void) {

	std::cout << "[DEBUG]	" << "I love to get extra baconfor my 7XL-double-cheese-triple-\
pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::_info(void) {

	std::cout << "[INFO]	" << "I cannot believe adding extrabacon cost more money. You \
don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void	Karen::_warning(void) {

	std::cout << "[WARNING] " << "I think I deserve to have some extra bacon for free.\
 I’ve beencoming here for years and you just started working here last month." << std::endl;
}

void	Karen::_error(void) {

	std::cout << "[ERROR]	" << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
