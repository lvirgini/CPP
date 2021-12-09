/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:21:22 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/09 17:36:30 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//AP, BP and CP. Then P is inside the triangle formed by A,B and C 
//if and only if all of the cross products AB×AP, BC×BP and CA×CP 
#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(Point const & p) {

	*this = p;	
}

Point & Point::operator=(Point const & p) {

	this->_x = p.getX();
	this->_y = p.getY();
	return (*this);
}


Fixed	Point::getX(void){

	return this->_x;
}

Fixed	Point::getY(void){

	return this->_y;
}









static Fixed	get_scalar(Point const a, Point const b) {



}

Point			get_vector(Point const a, Point const b) {


}



bool bsp( Point const a, Point const b, Point const c, Point const point) {



}
