/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 20:59:18 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/26 14:37:40 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConvert.hpp"

/*
	this works but not diplay error / impossible conversion, non displayable ..
	
	double		d = scalar.convertDouble();
	float		f = scalar.convertFloat();
	char		c = scalar.convertChar();
	int			i = scalar.convertInt();

	std::cout << "char:	" << c << std::endl;
	std::cout << "int:	" << i << std::endl;
	std::cout << "float:	" << f << std::endl;
	std::cout << "double:	" << d << std::endl;
*/

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "usage :  ./conversion <string>" << std::endl;
		return (1);
	}
	
	ScalarConvert	scalar(av[1]);
	scalar.printAllValues();

	return (0);
}
