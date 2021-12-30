/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 22:59:18 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/30 11:21:42 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <algorithm> 
#include <list>

int main(void)
{
	std::list<int>	tab;

	for (int i = 0; i < 10; i++)
		tab.push_back(i);

	try
	{
		std::list<int>::iterator i = easyfind(tab, 2);
		std::cout << "easyfind have found " << *i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " " << 2 << std::endl;
	}


	try
	{
		std::list<int>::iterator i = easyfind(tab, 222);
		std::cout << "easyfind have found " << *i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " " << 222 << std::endl;
	}

	return (0);
}
