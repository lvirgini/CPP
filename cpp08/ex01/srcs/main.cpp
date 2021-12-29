/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:10:02 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/29 16:16:01 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <exception>
#include <ctime>
#include <cstdlib>
#include <list>

#define NUMBER	1000
int main(void)
{

	std::cout << "Testing like the main" << std::endl;
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;





	std::cout << "testing with random number and addNumber with iterators " << std::endl;
	Span	spanTab = Span(NUMBER);

	std::list<int> tab;

	srand(time(NULL));
	
	for (int i = 0; i < NUMBER; i++)
		tab.push_back(rand());

	std::cout << tab.size() << std::endl;

	spanTab.addNumber(tab.begin(), tab.end());
	//spanTab.display();
	std::cout << spanTab.shortestSpan() << std::endl;
	std::cout << spanTab.longestSpan() << std::endl << std::endl;


	std::cout << "testing add more number than span can have " << std::endl;

	try
	{
		spanTab.addNumber(tab.begin(), tab.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
