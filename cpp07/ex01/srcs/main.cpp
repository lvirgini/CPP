/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:35:24 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/27 22:34:36 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>

int		initInt(int i)
{
	static int	count = 0;

	(void)i;
	return (count++);
}

int		printInt(int i)
{
	std::cout << i << " ";
	return (i);
}

int		incrementInt(int i)
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

	::iter2(i, 10, initInt);
	::iter2(i, 10, printInt);
	std::cout << std::endl;

	::iter2(i, 10, incrementInt);
	::iter2(i, 10, printInt);
	std::cout << std::endl;


	::iter2(s, 3, printString);
	std::cout << std::endl;

	::iter2(s, 3, makePouet);
	::iter2(s, 3, printString);
	std::cout << std::endl;
	
	::iter2(s, 3, makePouet);
	::iter2(s, 3, printString);
	std::cout << std::endl;

	int 	tab[] = { 0, 1, 2, 3, 4 };

	::iter(tab, 5, print);
	::iter(s, 3, print);

	return (0);

}
