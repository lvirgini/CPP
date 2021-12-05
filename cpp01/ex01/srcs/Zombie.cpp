/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:13:44 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/04 22:07:55 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>


Zombie::Zombie(void) {

	return ;
}

Zombie::~Zombie(void) {

	std::cout << this->_name << " is killed by Buffy" << std::endl;
}


void	Zombie::announce(void) const {

	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}


void	Zombie::give_him_a_name(std::string name) {

	this->_name = name;
}
