/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:09:05 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/12 01:07:41 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */


Animal::Animal(void) :_type("undefined")
{
	std::cout << "Animal type:" << this->_type << " created" << std::endl;
}


Animal::Animal(std::string type) : _type(type) 
{
	std::cout << "Animal type:" << type << " created" << std::endl;
}

Animal::Animal(Animal const & animal)
{
	*this = animal;
	std::cout << "Animal type:" << this->_type << " created by copy" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal type:" << this->_type << " destroy" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */


Animal &	Animal::operator=(Animal const & animal)
{
	if (this != &animal)
		*this = animal;
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */
void		Animal::makeSound(void) const 
{
	std::cout << "Animal sounds: is undefined" << std::endl;
}

std::string		Animal::getType(void) const
{
	return(this->_type);
}
