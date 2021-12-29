/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:55:31 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/29 18:27:42 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <list>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

Span::Span(unsigned int n) : _maxSize(n), _tab()
{}
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
		this->_maxSize = copy._maxSize;
		this->_tab.assign(copy._tab.begin(), copy._tab.end());
	}
	return *this;
}
/* -------------------------------------------------------------------------- */

Span::~Span(void)
{}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

void	Span::addNumber(int to_add)
{
	if (this->_tab.size() >= this->_maxSize)
		throw (SpanIsFull());
	this->_tab.push_back(to_add);
	this->_tab.sort();
}
/* -------------------------------------------------------------------------- */

void	Span::display(void) const
{

	std::list<int>::const_iterator it = this->_tab.begin();
	std::list<int>::const_iterator ite = this->_tab.end();

	for (;it != ite; it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

/* -------------------------------------------------------------------------- */

void	Span::checkSpan(void) const
{
	if (this->_tab.empty())
		throw (SpanIsEmpty());
	if (this->_tab.size() < 2)
		throw(SpanNotEnoughNumber());
}

int		Span::shortestSpan(void) const
{
	int				actualSpan;
	int				shortSpan = 0;

	this->checkSpan();
	
	std::list<int>::const_iterator it_next = this->_tab.begin();
	std::list<int>::const_iterator ite = this->_tab.end();

	it_next++;
	for (std::list<int>::const_iterator it = this->_tab.begin(); it_next != ite; it++)
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
	this->checkSpan();
	
	std::list<int>::const_iterator it = this->_tab.begin();
	std::list<int>::const_iterator ite = this->_tab.end();

	ite--;
	return (*ite - *it);
}
