/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:35:14 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/22 20:35:04 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

AMateria::AMateria(void) : _type(NULL)
{}

AMateria::AMateria(std::string const & type) : _type(type)
{}

AMateria::AMateria(AMateria const & copy)
{
	*this = copy;
}

AMateria::~AMateria(void)
{}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

AMateria &	AMateria::operator=(AMateria const & copy)
{
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

std::string const & 	AMateria::getType(void) const
{
	return (this->_type);
}

void					AMateria::use(ICharacter & target)
{
	std::cout << "use an Abstract Materia on" << target.getName() << std::endl;
}
