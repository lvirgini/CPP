/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:49:06 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/13 15:43:10 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

ClapTrap::ClapTrap(std::string name) : 
		_name(name), 
		_hitpoints(CLAPTRAP_HITPOINTS),
		_attack_damage(CLAPTRAP_ATTACK),
		_energy_point(CLAPTRAP_ENERGY)
{
	std::cout << "ClapTrap  " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & clap) : 
		_name(clap._name),
		_hitpoints(clap._hitpoints),
		_attack_damage(clap._attack_damage),
		_energy_point(clap._energy_point)
{
	std::cout << "ClapTrap  " << this->_name << " created by copy" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap  " << this->_name << " destroy" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

ClapTrap &		ClapTrap::operator=(ClapTrap const & clap)
{
	if (this == &clap)
		return (*this);
	this->_name = clap._name;
	this->_attack_damage = clap._attack_damage;
	this->_energy_point = clap._energy_point;
	this->_hitpoints = clap._hitpoints;
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Get                                          */
/* -------------------------------------------------------------------------- */

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

unsigned int	ClapTrap::getHitPoint(void) const
{
	return (this->_hitpoints);
}

unsigned int	ClapTrap::getEnergyPoint(void) const
{
	return (this->_energy_point);
}

std::string		ClapTrap::getName(void) const
{
	return (this->_name);
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

void	ClapTrap::attack(std::string const & target) const
{
	std::cout << "ClapTrap  " << this->_name << " attacks " << target \
	<< " causing " << this->_attack_damage << " points of damage." << std::endl;
}

void 	ClapTrap::takeDamage(unsigned int amount) 
{
	std::cout << "ClapTrap  " << this->_name << " takes " << amount << " damage ";
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

void	ClapTrap::beRepaired(unsigned int amount) 
{
	this->_hitpoints += amount;
	std::cout << "ClapTrap  " << this->_name << " is repaired and now has " \
	 << this->_hitpoints << " hitpoints" << std::endl;
}

void	ClapTrap::announce(void) const {

	std::cout << "ClapTrap announce : " << std::endl;
	std::cout << "name = " << this->_name << std::endl;
	std::cout << "hitpoints = " << this->_hitpoints << std::endl;
	std::cout << "energy point = " << this->_energy_point << std::endl;
	std::cout << "attack Damage = " << this->_attack_damage << std::endl << std::endl;
}
