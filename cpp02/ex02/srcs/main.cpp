/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:40:23 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/08 19:30:45 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include <bitset>
#include <climits>

int main( void ) {

	Fixed const a (0.481f);
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	//Fixed const d( b );
	//float	f = 42.1234f;
	//int		i = roundf(f * (1 << 8));
	//std::cout << ((float)i / (1 << 8)) << std::endl;

	//a = Fixed( 1234.4321f );

	std::cout << "b is " << std::bitset<16>(b.getRawBits()) << std::endl;
	std::cout << "c is " <<  std::bitset<16>((float)42.42f * (1 << 8 )) << std::endl;
/*	a = b + b;
	std::cout << "a is " << std::bitset<16>(a.getRawBits()) << std::endl;*/


	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "a + b is " << a + b << std::endl;
	std::cout << "a + b + c is " << a + b + c << std::endl;
	/*std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;*/

	return 0;
}
