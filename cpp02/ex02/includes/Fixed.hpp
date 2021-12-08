/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:39:58 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/08 19:18:37 by lvirgini         ###   ########.fr       */
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

		Fixed &		operator=(Fixed const & f);
		Fixed		operator+(Fixed const & f) const;
	/*	Fixed		operator-(Fixed const & f) const;
		Fixed		operator*(Fixed const & f) const;
		Fixed		operator/(Fixed const & f) const;

		Fixed		operator>(Fixed const & f) const;
		Fixed		operator>=(Fixed const & f) const;
		Fixed		operator<(Fixed const & f) const;
		Fixed		operator<=(Fixed const & f) const;
		Fixed		operator==(Fixed const & f) const;
		Fixed		operator!=(Fixed const & f) const;*/

		//++i i++ --i i-- par epsilon min max



		float		toFloat(void) const ;
		int			toInt(void) const ;

		int			getRawBits(void) const ;
		void 		setRawBits(int const raw);
		
	private:

		int					_nb;
		static int const	_width;

		
};

std::ostream & operator<<( std::ostream & o, Fixed const & fix);

#endif
