/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:35:24 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/27 13:09:26 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>

int	initInt(int i)
{
	static int	count = 0;

	(void)i;
	return (count++);
}

int	printInt(int i)
{
	std::cout << i << " ";
	return (i);
}

int	incrementInt(int i)
{
	return (i + 1);
}

std::string		printString(std::string s)
{
			std::cout << s << " | ";
			return (s);
}


std::string		makePouet(std::string s)
{
	if (s.data() == NULL)
		return ("pouet");
	return ("pouet " + s);
}

int main(void)
{
	std::string s[3] = {"", "toto", "at the ending"};
	int			i[10];

	::iter(i, 10, initInt);
	::iter(i, 10, printInt);
	std::cout << std::endl;

	::iter(i, 10, incrementInt);
	::iter(i, 10, printInt);
	std::cout << std::endl;


	::iter(s, 3, printString);
	std::cout << std::endl;

	::iter(s, 3, makePouet);
	::iter(s, 3, printString);
	std::cout << std::endl;
	
	::iter(s, 3, makePouet);
	::iter(s, 3, printString);
	std::cout << std::endl;

	return (0);

}
