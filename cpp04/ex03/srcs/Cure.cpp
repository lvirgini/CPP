/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:04:14 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/22 20:20:36 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include <iostream>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

Cure::~Cure(void)
{}

Cure::Cure(void) : AMateria("cure")
{}

Cure::Cure(Cure const &copy) : AMateria(copy)
{
	*this = copy;
}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

Cure &Cure::operator=(Cure const &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

AMateria *Cure::clone(void) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
