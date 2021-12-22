/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 22:05:20 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/23 00:04:10 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{

	// created a grade < 1
	std::cout << "grade < 1 :" << std::endl;
	try
	{
		Bureaucrat m("Patron", -1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	// created a grade > 150
	std::cout << "grade > 150 :" << std::endl;
	try
	{
		Bureaucrat m("Artist", 333);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	// grade 1 increment
	Bureaucrat b1("Boss", 1);
	std::cout << b1 << " : try to upGrade" << std::endl;
	b1.upGrade();
	std::cout << std::endl;


	// grade 150 decrement
	Bureaucrat b2("Bleu", 149);
	std::cout << b2 << " : try to downGrade" << std::endl;
	b2.downGrade();
	std::cout << b2 << " : try to downGrade" << std::endl;
	b2.downGrade();

	std::cout << std::endl;


	return (0);
}