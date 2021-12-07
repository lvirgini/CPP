/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:27:50 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/07 22:38:51 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {

	return ;
}

HumanA::~HumanA(void) {

	return ;
}

/*
**
*/

void	HumanA::attack(void) const {

	std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}