/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 22:59:18 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/28 14:10:07 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
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
		std::cerr << e.what() << '\n';
	}


	try
	{
		std::list<int>::iterator i = easyfind(tab, 222);
		std::cout << "easyfind have found " << *i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << 222 << '\n';
	}

	return (0);
}
