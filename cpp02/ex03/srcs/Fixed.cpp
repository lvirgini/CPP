/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:39:44 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/09 17:03:33 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

Fixed::Fixed (void) : _nb(0) {
}

//	FIXED
//	integer	  ,  float
//	0000 0000 , 0000 1100 =  12 en INT mais pour fixed : 8 decallage a gauche : 
//	0000 1100 , 0000 0000

Fixed::Fixed (int i) : _nb(i) {
	this->_nb = i * (1 << this->_width);
}

Fixed::Fixed ( float f) {

	this->_nb = roundf(f * (float)(1 << this->_width));
}

Fixed::Fixed( Fixed const & f) {

	*this = f;
}

Fixed::~Fixed(void) {
}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

Fixed &	Fixed::operator=(Fixed const & f) {

	this->_nb = f.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const & f) const {
	
	Fixed	result;
	int		raw;

	raw = this->_nb + f.getRawBits();
	result.setRawBits(raw);
	return (result);
}

Fixed	Fixed::operator-(Fixed const & f) const {
	
	Fixed	result;
	int		raw;

	raw = this->_nb - f.getRawBits();
	result.setRawBits(raw);
	return (result);
}

/*
** Dvision of raw value and right shift by width
*/

Fixed	Fixed::operator*(Fixed const & f) const {
	
	int		raw;
	Fixed	result;

	raw = (this->_nb * f.getRawBits()) >> this->_width;
	result.setRawBits(raw);
	return (result);
}

/*
** Dvision of raw value and left shift by width
*/

Fixed	Fixed::operator/(Fixed const & f) const {
	
	Fixed	result;
	int		raw;

	if (f.getRawBits() == 0)
		return (result);
	raw = (this->_nb / f.getRawBits()) * ( 1 << this->_width);
	result.setRawBits(raw);
	return (result);
}

/*
** comparaison operator 
*/

bool		Fixed::operator>(Fixed const & f) const {

	return (this->_nb > f.getRawBits());
}

bool		Fixed::operator>=(Fixed const & f) const {

	return (this->_nb >= f.getRawBits());
}

bool		Fixed::operator<(Fixed const & f) const {

	return (this->_nb < f.getRawBits());
}

bool		Fixed::operator<=(Fixed const & f) const {

	return (this->_nb > f.getRawBits());
}

bool		Fixed::operator==(Fixed const & f) const {

	return (this->_nb == f.getRawBits());
}

bool		Fixed::operator!=(Fixed const & f) const {

	return (this->_nb != f.getRawBits());
}

/*
** Incrementation Decrementation
*/


Fixed &		Fixed::operator++(void) {

	this->_nb++;
	return (*this);
}

Fixed		Fixed::operator++(int) {
	
	Fixed	res = (*this);
	this->_nb++;
	return (res);
}

Fixed &		Fixed::operator--(void) {

	this->_nb--;
	return (*this);
}

Fixed		Fixed::operator--(int) {

	Fixed	res = (*this);
	this->_nb--;
	return (res);
}


std::ostream & operator<<( std::ostream & o, Fixed const & fix){

	o << fix.toFloat();
	return o;
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

int		Fixed::getRawBits(void) const {

	//std::cout << "getRawBits member function called" << std::endl;
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


Fixed const &		Fixed::min(Fixed const & a, Fixed const & b) {

	return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed &		Fixed::min(Fixed & a, Fixed & b) {

	return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed const &		Fixed::max(Fixed const & a, Fixed const & b) {

	return (a.getRawBits() > b.getRawBits() ? a : b);
}

Fixed &		Fixed::max(Fixed & a, Fixed & b) {

	return (a.getRawBits() > b.getRawBits() ? a : b);
}

