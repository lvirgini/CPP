/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:52:09 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/22 20:20:32 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include <iostream>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

Ice::~Ice(void)
{}

Ice::Ice(void) : AMateria("ice")
{}

Ice::Ice(Ice const & copy) : AMateria(copy)
{
	*this = copy;
}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

Ice &		Ice::operator=(Ice const & copy)
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

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter & target)
{
	std::cout <<"* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

