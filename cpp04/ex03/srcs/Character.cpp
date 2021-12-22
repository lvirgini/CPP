/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:14:18 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/22 21:32:16 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>
#include <AMateria.hpp>
#include <iostream>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < MAX_MATERIA; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const & copy)
{
	*this = copy;
}

Character::~Character(void)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

Character &		Character::operator=(Character const & copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		for (int i = 0; i < MAX_MATERIA; i++)
		{
			if (this->_inventory[i] != NULL)
				delete this->_inventory[i];
			this->_inventory[i] = copy._inventory[i]->clone();
		}
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

std::string const & Character::getName() const 
{
	return (this->_name);
}


void	Character::equip(AMateria *m)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "inventory is full, cannot equip another materia" << std::endl;
}


void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < MAX_MATERIA)
		this->_inventory[idx] = NULL;
	else
		std::cout << idx << " is not a good index : must be < " << MAX_MATERIA - 1 << std::endl;
}


void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < MAX_MATERIA)
	{
		if (this->_inventory[idx] != NULL)
			this->_inventory[idx]->use(target);
		else
			std::cout << "there is no materia in this index" << std::endl;
	}
	else
		std::cout << idx << " is not a good index : must be < " << MAX_MATERIA - 1 << std::endl;
}
