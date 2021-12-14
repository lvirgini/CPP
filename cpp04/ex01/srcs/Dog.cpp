/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:19:24 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/14 18:15:59 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

Dog::Dog(void) : Animal("dog")
{
	this->_dogBrain = new Brain();
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(Dog const & copy) : Animal(copy)
{
	*this->_dogBrain = new Brain(*copy._dogBrain);
	std::cout << "Dog created by copy" << std::endl;
}

Dog::~Dog(void)
{
	delete this->_dogBrain;
	std::cout << "Dog destroy" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

Dog &	Dog::operator=(Dog const & copy)
{
	std::cout << "Dog operator =" << std::endl;
	if (this != &copy)
	{
		delete this->_dogBrain;
		this->_dogBrain = new Brain();
		std::cout << &this->_dogBrain << std::endl;
		this->_dogBrain = copy._dogBrain;
		std::cout << &this->_dogBrain << std::endl;
		this->_type = copy._type;
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

void	Dog::makeSound(void) const
{
	std::cout << "Dog sounds: \"Ouaff\"" << std::endl;
}

void	Dog::setBrainIdeas(std::string ideas)
{
	this->_dogBrain->setIdeas(ideas);
}

void	Dog::displayBrain(void) const
{
	this->_dogBrain->printIdeas();
}
