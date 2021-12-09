/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:40:23 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/09 16:32:27 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include <bitset>///
#include <climits>////

	//Fixed const d( b );
	//float	f = 42.1234f;
	//int		i = roundf(f * (1 << 8));
	//std::cout << ((float)i / (1 << 8)) << std::endl;

	//a = Fixed( 1234.4321f );

//	std::cout << "b is " << std::bitset<16>(b.getRawBits()) << std::endl;
//	std::cout << "c is " <<  std::bitset<16>((float)42.42f * (1 << 8 )) << std::endl;
/*	a = b + b;
	std::cout << "a is " << std::bitset<16>(a.getRawBits()) << std::endl;*/

void	main_test()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
}


int main( void ) {

	Fixed const a (0.5f);
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( 42.42f );


	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl << std::endl;

	std::cout << "a + b == " << a + b << std::endl;
	std::cout << "a + b + c == " << a + b + c << std::endl << std::endl;
	
	std::cout << "b - a = " << b - a << std::endl;
	std::cout << "b - a - c = " << b - a - c << std::endl << std::endl;

	std::cout << "b * a = " << b * a << std::endl;
	std::cout << "b * a * c = " << b * a * c << std::endl << std::endl;

	std::cout << "b / a = " << b / a << std::endl;
	std::cout << "b / a * c = " << b / a * c << std::endl << std::endl;

	std::cout << "a > b ? " << (a > b) << std::endl;
	std::cout << "c > b ? " << (c > b) << std::endl;

	std::cout << "c >= d ? " << (c <= d) << std::endl;

	std::cout << "a < b ? " << (a < b) << std::endl;
	std::cout << "c < b ? " << (c < b) << std::endl;
	std::cout << "c <= d ? " << (c <= d) << std::endl;

	std::cout << "c == d ? " << (c == d) << std::endl;
	std::cout << "a == b ? " << (a == b) << std::endl;

	std::cout << "c != d ? " << (c != d) << std::endl;
	std::cout << "a != b ? " << (a != b) << std::endl << std::endl;

	Fixed	e;

	std::cout << "e is " << e << std::endl;
	std::cout << "e++ = " << e++ << std::endl;
	std::cout << "++e = " << ++e << std::endl;
	std::cout << "e-- = " << e-- << std::endl;
	std::cout << "--e = " << --e << std::endl << std::endl;


	std::cout << " min (a, b) = " << Fixed::min(a, b) << std::endl;
	std::cout << " min (c, b) = " << Fixed::min(c, b) << std::endl;
	std::cout << " max (a, b) = " << Fixed::max(a, b) << std::endl;
	std::cout << " max (c, d) = " << Fixed::max(c, d) << std::endl << std::endl;

	main_test();
	return 0;
}
