/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:03:42 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/22 21:34:24 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < MAX_MATERIA_SOURCE; i++)
		this->_slot[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & copy)
{
	*this = copy;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < MAX_MATERIA_SOURCE; i++)
	{
		if (this->_slot[i] != NULL)
			delete this->_slot[i];
	}
}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */


MateriaSource &		MateriaSource::operator=(MateriaSource const & copy)
{
	if (this != &copy)
		for (int i = 0; i < MAX_MATERIA_SOURCE; i++)
			this->_slot[i] = copy._slot[i]->clone();
	return (*this);
}

void 		MateriaSource::learnMateria(AMateria* to_add)
{
	for (int i = 0; i < MAX_MATERIA_SOURCE; i++)
	{
		if (this->_slot[i] == NULL)
		{
			this->_slot[i] = to_add;
			return ;
		}
	}
	std::cout << "cannot learn more than " << MAX_MATERIA_SOURCE << " Materia" << std::endl;
	delete to_add;
}


/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MAX_MATERIA_SOURCE; i++)
	{
		if (this->_slot[i] == NULL)
			break ;
		if (this->_slot[i]->getType() == type)
			return (this->_slot[i]->clone());
	}
	return (NULL);
}