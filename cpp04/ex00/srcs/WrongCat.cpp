/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:47:47 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/14 12:46:04 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(WrongCat const & wrongcat) : WrongAnimal(wrongcat)
{
	std::cout << "WrongCat created by copy" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destroy" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

WrongCat &	WrongCat::operator=(WrongCat const & copy)
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

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sounds: \"Miaou\"" << std::endl;
}
