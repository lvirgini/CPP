/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:31:57 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/07 22:37:46 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL){

	return ;
}

HumanB::~HumanB(void) {

	return ;
}

/*
**
*/

void	HumanB::attack(void) const {

	std::cout << this->_name << " attacks with ";
	if (this->_weapon)
		std::cout << this->_weapon->getType() << std::endl;
	else
		std::cout << "no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {

	this->_weapon = &weapon;
}
