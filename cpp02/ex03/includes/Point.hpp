/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:05:11 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/10 19:54:49 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point {

	public :
		Point(void) : _x(0), _y(0) {};
		Point(float const x, float const y) :_x(x), _y(y) {};
		Point(Point const & p) ;
		~Point(void) {};

		Point &		operator=(Point const & p);

		Fixed		getX(void) const ;
		Fixed		getY(void) const ;
		Fixed		dot_product(Point const & v1, Point const & v2) const ;
		Point		create_vector(Point const & a, Point const & b) const ;
		static Fixed		determinant(Point const & a, Point const & b, Point const & c) ;
		static Fixed		crossProduct(Point const & v1, Point const & v2) ;
	private:

		Fixed const _x;
		Fixed const _y;

};


bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
