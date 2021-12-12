/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:19:24 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/12 10:39:58 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

Cat::Cat(void) : Animal("cat")
{
	this->_catBrain = new Brain();
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(Cat const & cat) : Animal(cat)
{
	std::cout << "Cat created by copy" << std::endl;
}

Cat::~Cat(void)
{
	delete this->_catBrain;
	std::cout << "Cat destroy" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

Cat &	Cat::operator=(Cat const & cat)
{
	if (this != &cat)
		*this = cat;
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

void	Cat::makeSound(void) const
{
	std::cout << "Cat sounds: \"Miaou\"" << std::endl;
}
