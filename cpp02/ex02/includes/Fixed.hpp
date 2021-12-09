/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:39:58 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/09 16:22:10 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed {

	public:

		Fixed(void) ;
		Fixed( int i);
		Fixed(float f);
		Fixed(Fixed const & f) ;
		~Fixed(void);

/*
** Operator
*/

		Fixed &		operator=(Fixed const & f);
		Fixed		operator+(Fixed const & f) const;
		Fixed		operator-(Fixed const & f) const;
		Fixed		operator*(Fixed const & f) const;
		Fixed		operator/(Fixed const & f) const;

		bool		operator>(Fixed const & f) const;
		bool		operator>=(Fixed const & f) const;
		bool		operator<(Fixed const & f) const;
		bool		operator<=(Fixed const & f) const;
		bool		operator==(Fixed const & f) const;
		bool		operator!=(Fixed const & f) const;

/*
** Increment Decrement
*/

		Fixed &		operator++(void);
		Fixed		operator++(int) ;
		Fixed &		operator--(void);
		Fixed		operator--(int) ;

/*
** Functions
*/

		float		toFloat(void) const ;
		int			toInt(void) const ;

		int			getRawBits(void) const ;
		void 		setRawBits(int const raw);
		
		static Fixed const &	min(Fixed const & a, Fixed const &b) ;
		static Fixed &			min(Fixed & a, Fixed &b) ;
		static Fixed const &	max(Fixed const & a, Fixed const &b) ;
		static Fixed &			max(Fixed & a, Fixed &b) ;


	private:

		int					_nb;
		static int const	_width;

		
};

std::ostream & operator<<( std::ostream & o, Fixed const & fix);

#endif
