/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:39:44 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/10 11:05:54 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

Fixed::Fixed (void) : _nb(0) {
	std::cout << "Default constructor called" << std::endl;
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
	this->_nb = f.getRawBits();
	return (*this);
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


/* -------------------------------------------------------------------------- */
/*                                 Static                                     */
/* -------------------------------------------------------------------------- */

int const	Fixed::_width = 8;
