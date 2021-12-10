/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:21:22 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/10 19:38:38 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//AP, BP and CP. Then P is inside the triangle formed by A,B and C 
//if and only if all of the cross products AB×AP, BC×BP and CA×CP 
#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(Point const & p) {

	*this = p;	
}

Point &	Point::operator=(Point const & p) {

	Point res = p;
	return (*this);
}


Fixed	Point::getX(void) const {

	return this->_x;
}

Fixed	Point::getY(void) const {

	return this->_y;
}


Fixed	Point::crossProduct(Point const & v1, Point const & v2) {

	return (Fixed((v1._x * v2._y ) - (v1._y * v2._x)));
	
}
/*
function triangleContains(ax, ay, bx, by, cx, cy, x, y) {

    let det = (bx - ax) * (cy - ay) - (by - ay) * (cx - ax)
    
    return  det * ((bx - ax) * (y - ay) - (by - ay) * (x - ax)) > 0 &&
            det * ((cx - bx) * (y - by) - (cy - by) * (x - bx)) > 0 &&
            det * ((ax - cx) * (y - cy) - (ay - cy) * (x - cx)) > 0*/
Fixed	Point::determinant(Point const & a, Point const & b, Point const & c) {

	Fixed det = ( b.getX() - a.getX() ) * (c.getY() - a.getY() ) - (b.getY() - a.getY() ) * (c.getX() - a.getX());

}

/*
	triangle ABC and point P
w1 = (Ax * (Cy - Ay) + (Py - Ay)(Cx - Ax) - Px(Cy - Ay))
divisé par (By - Ay)(Cx - Ax) - (Bx - Ax)(Cy - Ay)
*/


bool bsp( Point const a, Point const b, Point const c, Point const point) {
}
