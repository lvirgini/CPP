/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:50:59 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/14 12:45:08 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */


WrongAnimal::WrongAnimal(void) :_type("undefined")
{
	std::cout << "WrongAnimal  " << this->_type << " created" << std::endl;
}


WrongAnimal::WrongAnimal(std::string type) : _type(type) 
{
	std::cout << "WrongAnimal " << type << " created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & wrongAnimal)
{
	*this = wrongAnimal;
	std::cout << "WrongAnimal " << this->_type << " created by copy" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal " << this->_type << " destroy" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */


WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & copy)
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
void		WrongAnimal::makeSound(void) const 
{
	std::cout << "WrongAnimal sounds: is undefined" << std::endl;
}

std::string		WrongAnimal::getType(void) const
{
	return(this->_type);
}

