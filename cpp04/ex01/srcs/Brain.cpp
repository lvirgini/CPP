/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 10:09:16 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/14 13:02:54 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	this->setIdees("Eat or sleep ?");
	std::cout << "a brain is created" << std::endl;
}

Brain::Brain(std::string idees)
{
	this->setIdees(idees);
	std::cout << "a brain is created with " << idees << " idees" << std::endl;
}

Brain::Brain(Brain const & copy)
{
	for (int i = 0; i < MAX_IDEES; i++)
		this->_idees[i] = copy.getIdee(i);
}

Brain::~Brain(void)
{
	std::cout << "a brain is destroy" << std::endl;
}

Brain &		Brain::operator=(Brain const & equal)
{
	if (this != &equal)
		*this = equal;
	return (*this);
}


std::string	Brain::getIdee(int	index) const
{
	if (index < MAX_IDEES)
		return (this->_idees[index]);
	return (NULL);
}


void		Brain::setIdees(std::string idees)
{
	for (int i = 0; i < MAX_IDEES; i++)
		this->_idees[i] = idees;
}