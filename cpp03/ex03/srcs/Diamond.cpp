/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamond.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:39:20 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/13 13:56:24 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "Diamond.hpp"
#include <string>
#include <iostream>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */


Diamond::Diamond(std::string name) :
		ClapTrap(name + "_clap_name"),
		ScavTrap(name),
		FragTrap(name),
		_name(name)
{
	this->_energy_point = SCAVTRAP_ENERGY;
	std::cout << "Diamond  " << this->_name << " created" << std::endl;
}

Diamond::Diamond(Diamond const & copy) :
		ClapTrap(copy),
		ScavTrap(copy),
		FragTrap(copy)
{
	std::cout << "Diamond  " << this->_name << " created by copy" << std::endl;
}

Diamond::~Diamond(void)
{
	std::cout << "Diamond  " << this->_name << " destroy" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */


Diamond &	Diamond::operator=(Diamond const & diams)
{
	if (this != &diams)
		*this = diams;
	return (*this);
}


/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */



void	Diamond::announce(void) const
{
	std::cout << "diamond  announce diamond name : " << this->_name << std::endl;
	this->ClapTrap::announce();
}

void	Diamond::whoAmI(void) const
{
	std::cout << "Diamond   woAmI ? : name in Diamond :" \
		<< this->_name << " and in Claptrap : " << this->ClapTrap::_name << std::endl;
}
