/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 10:09:16 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/14 18:10:54 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

Brain::Brain(void)
{
	this->setIdeas("Eat or sleep ?");
	std::cout << "a brain is created" << std::endl;
}

Brain::Brain(std::string ideas)
{
	this->setIdeas(ideas);
	std::cout << "a brain is created with " << ideas << " ideas" << std::endl;
}

Brain::Brain(Brain const & copy)
{
	std::cout << "Brain to copy" << this->_ideas << std::endl;
	std::cout << "Brain copy" << copy._ideas << std::endl;
	for (int i = 0; i < MAX_IDEAS; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain::~Brain(void)
{
	std::cout << "a brain is destroy" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

Brain &		Brain::operator=(Brain const & copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < MAX_IDEAS; i++)
			this->_ideas[i] = copy._ideas[i];
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */


std::string	Brain::getIdea(int	index) const
{
	if (index < MAX_IDEAS)
		return (this->_ideas[index]);
	return (NULL);
}

void		Brain::setIdeas(std::string ideas)
{
	for (int i = 0; i < MAX_IDEAS; i++)
		this->_ideas[i] = ideas;
}

void		Brain::printIdeas(void) const
{
	std::cout << "list of ideas" << std::endl;
	for (int i = 0; i < MAX_IDEAS; i++)
		std::cout << i << " ideas = " << this->_ideas[i] << std::endl;	
}
