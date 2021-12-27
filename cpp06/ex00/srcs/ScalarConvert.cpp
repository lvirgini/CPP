/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 14:35:59 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/27 18:28:30 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConvert.hpp>
#include <limits>
#include <string>
#include <cstdlib>
#include <iostream>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

ScalarConvert::ScalarConvert(std::string s) : s(s)
{
	this->type = foundType();
	this->doubleValue = this->convertDouble();
}

ScalarConvert::ScalarConvert(ScalarConvert const & copy)
{
	*this = copy;
}

ScalarConvert::~ScalarConvert(void)
{}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

ScalarConvert &		ScalarConvert::operator=(ScalarConvert const & copy)
{
	this->s = copy.s;
	this->type = copy.type;
	this->doubleValue = copy.doubleValue;
	return (*this);
}


/* -------------------------------------------------------------------------- */
/*                                 Get                                        */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */
	
int		ScalarConvert::foundType(void) 
{
	if (isdigit(*this->s.data()) 
	|| (*this->s.data() == '-' && isdigit(*(this->s.data() + 1))))
	{
		if (this->s.find('.') != this->s.npos)
			return (IS_DOUBLE);
		return (IS_INT);
	}
	return (IS_NAN);
}

double	ScalarConvert::convertDouble(void) const
{
	return (strtod(this->s.data(), NULL));
}


float	ScalarConvert::convertFloat(void) const
{
	return (static_cast<float>(this->doubleValue));
}

int		ScalarConvert::convertInt(void) const
{
	return (static_cast<int>(this->doubleValue));
}

char	ScalarConvert::convertChar(void) const
{
	return (static_cast<char>(this->doubleValue));
}

/* -------------------------------------------------------------------------- */
/*                               Display functions                            */
/* -------------------------------------------------------------------------- */


void	ScalarConvert::printChar(void) const
{
	char	c = this->convertChar();

	if (this->type == IS_NAN)
	{
		if (this->s.length() == 1)
			c = static_cast<char>(*this->s.data());
		if (isprint(c))
			std::cout << "char:	" << c << std::endl;
		else
		std::cout << "char:	impossible" << std::endl;
	}
	else if (isprint(c) == false)
		std::cout << "char:	Non displayable" << std::endl;
	else
		std::cout << "char:	" << c << std::endl;
}


void	ScalarConvert::printInt(void) const
{
	int		i = this->convertInt();

	if (this->type == IS_NAN)
		std::cout << "int :	impossible" << std::endl;
	else
		std::cout << "int:	" << i << std::endl;
}


void	ScalarConvert::printFloat(void) const
{
	float	f = this->convertFloat();

	std::cout << "float:	" << f;
	if ( f < std::numeric_limits<float>::max())
	{
		if (this->type == IS_INT || f - this->convertInt() == 0)
			std::cout << ".0";
	} 
	std::cout << "f" << std::endl;
}


void	ScalarConvert::printDouble(void) const
{
	std::cout << "double:	" << this->doubleValue;
	if (this->doubleValue < std::numeric_limits<double>::max())
	{
		if (this->type == IS_INT || this->doubleValue - this->convertInt() == 0)
			std::cout << ".0";
	}
	std::cout << std::endl;
}


void	ScalarConvert::printAllValues(void) const
{
	this->printChar();
	this->printInt();
	this->printFloat();
	this->printDouble();
}
