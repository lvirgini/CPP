/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:39:44 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/08 14:43:29 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

Fixed::Fixed (void) : _nb(0) {
	std::cout << "Default constructor called" << std::endl;
}

//	FIXED
//	integer	  ,  float
//	0000 0000 , 0000 1100 = 12 decallage a gauche : 
//	0000 1100 , 0000 0000

Fixed::Fixed (int i) : _nb(i) {
	this->_nb = i * (1 << this->_width);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed ( float f) {

	this->_nb = roundf(f * (1 << this->_width));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & f) {

	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

Fixed &	Fixed::operator=(Fixed const & f) {

	std::cout << "Assignation operator called" << std::endl;
	if (this != &f)
		this->_nb = f.getRawBits();
	return (*this);
}

std::ostream & operator<<( std::ostream & o, Fixed const & fix){

	o << fix.toFloat();
	return o;
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

int		Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb);
}

void 	Fixed::setRawBits( int const raw ) {
	this->_nb = raw;
}

int		Fixed::toInt(void) const {

	return (this->_nb / (1 << this->_width));
}

float	Fixed::toFloat(void) const {

	return ((float)this->_nb / (1 << this->_width));
}



/* -------------------------------------------------------------------------- */
/*                                 Static                                     */
/* -------------------------------------------------------------------------- */

int const	Fixed::_width = 8;


