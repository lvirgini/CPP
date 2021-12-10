/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:49:06 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/10 23:15:15 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
	this->_hitpoints = SCAVTRAP_HITPOINTS;
	this->_attack_damage = SCAVTRAP_DAMAGE;
	this->_energy_point = SCAVTRAP_ENERGY;
	std::cout << "ScavTrap  " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & scav) : ClapTrap(scav)
{
	std::cout << "ScavTrap  " << this->_name << " created by copy" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap  " << this->_name << " destroy" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */
/*
ScavTrap &		ScavTrap::operator=(ScavTrap const & scav)
{
	if (this != &scav)
	{
		this->_name = scav._name;
		this->_hitpoints = scav._hitpoints;
		this->_energy_point = scav._energy_point;
		this->_attack_damage = scav._attack_damage;
	}
	return (*this);
}*/

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */
/*
void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap  " << this->_name << " attacks " << target \
	<< " causing " << this->_attack_damage << " points of damage." << std::endl;
}

void 	ScavTrap::takeDamage(unsigned int amount) 
{
	std::cout << "ScavTrap  " << this->_name << " takes " << amount << " damage ";
	if (amount >= this->_hitpoints)
	{
		this->_hitpoints = 0;
		std::cout << " and die" << std::endl;
	}
	else
	{
		this->_hitpoints -= amount;
		std::cout << "and now has " << this->_hitpoints << " hitpoints" << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount) 
{
	this->_hitpoints += amount;
	std::cout << "ScavTrap  " << this->_name << " is repaired and now has " \
	 << this->_hitpoints << " hitpoints" << std::endl;
}
*/
/* -------------------------------------------------------------------------- */
/*                                 Static                                     */
/* -------------------------------------------------------------------------- */