/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:09:05 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/22 15:15:08 by lvirgini         ###   ########.fr       */
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

Animal::Animal(Animal const & animal) : _type(animal._type)
{
	std::cout << "Animal type:" << this->_type << " created by copy" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal type:" << this->_type << " destroy" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */


Animal &	Animal::operator=(Animal const & copy)
{
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

std::string		Animal::getType(void) const
{
	return(this->_type);
}
