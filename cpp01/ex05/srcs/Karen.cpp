/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:35:34 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/05 17:02:38 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <string>
#include <iostream>

Karen::Karen(void) {

	return ;
}

Karen::Karen(void) {

	return ;
}

/*
**
*/

void	Karen::complain(std::string level) {


}


/*
**
*/

void	Karen::_debug(void) {

	std::cout << "I love to get extra baconfor my 7XL-double-cheese-triple-\
pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::_info(void) {

	std::cout << "I cannot believe adding extrabacon cost more money. You \
don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void	Karen::_warning(void) {

	std::cout << "I think I deserve to have some extra bacon for free.\
 I’ve beencoming here for years and you just started working here last month." << std::endl;
}

void	Karen::_error(void) {

	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	
}