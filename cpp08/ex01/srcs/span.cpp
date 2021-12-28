/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:55:31 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/28 18:10:15 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <set>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

Span::Span(unsigned int n)
{
	this->tab = new int[n];
	this->len = n;
	this->numberAdded = 0;
}

Span::Span(Span const & copy)
{
	*this = copy;
}

Span & Span::operator=(Span const & copy )
{
	if (this != &copy)
	{
		if (this->tab)
			delete this->tab;
		this->len = copy.len;
		this->numberAdded = copy.numberAdded;
		this->tab = new int(this->len);
		for (unsigned int i = 0; i < this->len; i++)
			this->tab[i] = copy.tab[i];
	}
	return *this;
}

Span::~Span(void)
{
	delete tab ;
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

void	Span::addNumber(int to_add)
{
	std::cout << this->numberAdded << " " << this->len << std::endl;
	if (this->numberAdded >= this->len)
		throw (tabIsFull());
	this->tab[this->numberAdded] = to_add;
	this->numberAdded += 1;;
}


int		Span::shortestSpan(void) const
{
	std::set<int> setTab (this->tab, this->tab + this->numberAdded);
	int *r = setTab.lower_bound();
	std::cout << *i << std::endl;
	return (1);
	//int res = 
	//std::cout << "lower = " << 
}
