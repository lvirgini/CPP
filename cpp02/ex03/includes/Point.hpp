/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:05:11 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/09 17:32:22 by lvirgini         ###   ########.fr       */
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

		Fixed		getX(void);
		Fixed		getY(void);

	private:

		Fixed const _x;
		Fixed const _y;

};


bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
