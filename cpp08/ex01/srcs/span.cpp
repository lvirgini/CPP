/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:55:31 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/29 16:22:13 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <list>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

Span::Span(unsigned int n) : _len(n), _numberAdded(0)
{
	this->tab = new int[n];
}
/* -------------------------------------------------------------------------- */

Span::Span(Span const & copy) 
{
	*this = copy;
}
/* -------------------------------------------------------------------------- */

Span & Span::operator=(Span const & copy)
{
	if (this != &copy)
	{
		if (this->tab)
			delete [] this->tab;
		this->_len = copy._len;
		this->_numberAdded = copy._numberAdded;
		this->tab = new int[this->_len];
		for (unsigned int i = 0; i < this->_len; i++)
			this->tab[i] = copy.tab[i];
	}
	return *this;
}
/* -------------------------------------------------------------------------- */

Span::~Span(void)
{
	delete [] this->tab ;
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

void	Span::addNumber(int to_add)
{
	if (this->_numberAdded >= this->_len)
		throw (SpanIsFull());
	this->tab[this->_numberAdded] = to_add;
	this->_numberAdded += 1;;
}
/* -------------------------------------------------------------------------- */

void	Span::display(void) const
{
	for (unsigned int i = 0; i < this->_numberAdded; i++)
		std::cout << this->tab[i] << " ";
	std::cout << std::endl;
}

/* -------------------------------------------------------------------------- */

int		Span::shortestSpan(void) const
{
	std::list<int>	listTab(this->tab, this->tab + this->_len);
	int				actualSpan;
	int				shortSpan = 0;

	listTab.sort();

	std::list<int>::iterator it = listTab.begin();
	std::list<int>::iterator it_next = listTab.begin();
	std::list<int>::iterator ite = listTab.end();

	it_next++;
	for (; it_next != ite; it++)
	{
		actualSpan =  *it_next - *it;
		if (shortSpan == 0 || actualSpan < shortSpan)
			shortSpan = actualSpan;
		it_next++;
	}
	return (shortSpan);
}

/* -------------------------------------------------------------------------- */

int		Span::longestSpan(void) const
{
	std::list<int>	listTab(this->tab, this->tab + this->_len);

	listTab.sort();

	std::list<int>::iterator it = listTab.begin();
	std::list<int>::iterator ite = listTab.end();

	ite--;
	return (*ite - *it);
}
