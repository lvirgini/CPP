/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClappTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:49:06 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/09 19:33:21 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(CLAPTRAP_HITPOINTS), _energy_point(CLAPTRAP_ENERGY), _attack_damage(0) {

	std::cout << "ClapTrap  " << name << " created" << std::endl;
}

ClapTrap::~ClapTrap(void) {

	std::cout << "ClapTrap  " << this->_name << " destroy" << std::endl;

}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */
void	ClapTrap::attack(std::string const & target) {
	
	std::cout << "ClassTrap  " << this->_name << " attack " << target << " causing " << this->_attack_damage << " points of damage." << std::endl;
}

void 	ClapTrap::takeDamage(unsigned int amount) {

	std::cout << "ClassTrap  " << this->_name << " take " << amount << " damage ";
	if (amount >= this->_hitpoints)
	{
		this->_hitpoints = 0;
		std::cout << " and die" << std::endl;
	}
	else
	{
		this->_hitpoints -= amount;
		std::cout << "and has " << this->_hitpoints << " hitpoints now" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {

	this->_hitpoints = CLAPTRAP_HITPOINTS;
	std::cout << "ClapTrap  " << this->_name << " recover all his life " << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                 Static                                     */
/* -------------------------------------------------------------------------- */