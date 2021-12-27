/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:15:12 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/27 16:33:46 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

template<typename T>
Array<T>::Array(void) : tabSize(0)
{
	this->tab = new T[0];
	
}

template<typename T>
Array<T>::Array(unsigned int n) : tabSize(n)
{
	this->tab = new T[n];
}

template<typename T>
Array<T>::~Array(void)
{
	delete [] tab;
}

template<typename T>
Array<T>::Array(Array const & copy) : tabSize(copy.size)
{
	this->tabSize = copy.size();
	this->tab = new T[this->tabSize];
	for (unsigned int i = 0; i < tabSize; i++)
		this->tab[i] = copy.tab[i];	
}

template<typename T>
Array<T> & Array<T>::operator=(Array const & copy)
{
	if (*this != copy)
	{
		delete this->tab;
		this->tabSize = copy.getSize();
		this->tab = new T[this->tabSize];
		for (unsigned int i = 0; i < tabSize; i++)
			this->tab[i] = copy.tab[i];	
	}
	return (*this);
}


template<typename T>
unsigned int	Array<T>::size(void) const
{
	return this->tabSize;
}
/*
template<typename T>
T			Array<T>::operator[](int index)
{
	return (test);
	if (index < 0 || index > this->size)
		throw(limitsOverflow());
	return (this->tab[index]);
}
*/
template<typename T>
const char *	Array<T>::limitsOverflow::what() const throw()
{
	return ("index is out of range : ");
}


template<typename T>
T  &		Array<T>::retTest(void)
{
	return (test);
}
