/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:19:24 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/14 12:55:39 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

Cat::Cat(void) : Animal("cat")
{
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(Cat const & cat) : Animal(cat)
{
	std::cout << "Cat created by copy" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destroy" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

Cat &	Cat::operator=(Cat const & copy)
{
	std::cout << "Cat operator =" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

void	Cat::makeSound(void) const
{
	std::cout << "Cat sounds: \"Miaou\"" << std::endl;
}
