/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:49:06 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/11 22:49:10 by lvirgini         ###   ########.fr       */
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


ScavTrap &	ScavTrap::operator=(ScavTrap const & scav)
{
	if (this != &scav)
		*this = scav;
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */


void	ScavTrap::attack(std::string const target) const
{
	std::cout << "ScavTrap  " << this->_name << " attacks special " << target \
	<< " causing " << this->_attack_damage << " points of damage." << std::endl;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap  " << this->_name << " have enterred in Gate keeper mode" << std::endl;
}
