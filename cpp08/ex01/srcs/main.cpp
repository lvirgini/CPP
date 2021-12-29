/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:10:02 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/29 15:20:37 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <exception>
#include <ctime>
#include <cstdlib>
#include <list>

#define NUMBER	10
int main(void)
{
	Span	test(3);
	Span	spanTab(NUMBER);

	std::list<int> tab;

	srand(time(NULL));
	
	for (int i = 0; i < NUMBER; i++)
		tab.push_back(rand());

	std::cout << tab.size() << std::endl;

	spanTab.addNumber(tab.begin(), tab.end());
	spanTab.dipslay();

	/*try
	{
		spanTab.addNumber(tab.begin(), tab.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	try
	{
		test.addNumber(2);
		test.addNumber(4);
		test.addNumber(-10);
	//	test.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
*/
		return (0);
	}
