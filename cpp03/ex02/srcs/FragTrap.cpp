/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:49:06 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/13 15:45:12 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
	this->_hitpoints = FRAGTRAP_HITPOINTS;
	this->_attack_damage = FRAGTRAP_DAMAGE;
	this->_energy_point = FRAGTRAP_ENERGY;
	std::cout << "FragTrap  " << name << " created" << std::endl;
}

FragTrap::FragTrap(FragTrap const & scav) : ClapTrap(scav)
{
	std::cout << "FragTrap  " << this->_name << " created by copy" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap  " << this->_name << " destroy" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

FragTrap &	FragTrap::operator=(FragTrap const & copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_attack_damage = copy._attack_damage;
		this->_energy_point = copy._energy_point;
		this->_hitpoints = copy._hitpoints;
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

void	FragTrap::hightFivesGuys(void) const
{
	std::cout << "FragTrap  " << this->_name << " says 'Give me hight five guys'" << std::endl;
}
