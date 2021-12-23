/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 22:05:20 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/23 16:41:32 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	std::string	sep = "-------------------------------------------------------";
/* -------------------------------------------------------------------------- */

	std::cout << sep << std::endl;
	std::cout << "try form with grade outside [1 - 150] : " << std::endl;
	try
	{
		Form	f1("hightLevel", -5, 100);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form	f1("lowtLevel", 5, 300);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	std::cout << std::endl << sep << std::endl;
/* -------------------------------------------------------------------------- */

	std::cout << "try signed form : " << std::endl;

	Form	f2("Selling Agence", 1, 15);
	std::cout << f2 << std::endl;


	// To low grade for sign
	Bureaucrat	b1("Blue", 150);
	std::cout << b1 << std::endl;

	try			
	{
		b1.signForm(f2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	// Good grade for sign
	Bureaucrat	b2("Boss", 1);
	std::cout << std::endl << b2 << std::endl;

	try
	{
		b2.signForm(f2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	
	// Good grade for sign but already signed
	try
	{
		b2.signForm(f2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << sep << std::endl;
/* -------------------------------------------------------------------------- */




/* -------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------- */
	

	// Form 



	// Form	f1("selling entreprise", 1, 5);
	
	// std::cout << f1 << std::endl;

	// // try to grade 1 increment
	// Bureaucrat b1("Boss", 1);
	// std::cout << b1 << " : try to upGrade" << std::endl;
	// b1.upGrade();
	// std::cout << std::endl;


	// // grade 150 decrement
	// Bureaucrat b2("Bleu", 149);
	// std::cout << b2 << " : try to downGrade" << std::endl;
	// b2.downGrade();
	// std::cout << b2 << " : try to downGrade" << std::endl;
	// b2.downGrade();

	// std::cout << std::endl;


	return (0);
}
