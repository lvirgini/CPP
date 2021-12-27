/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 22:05:20 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/27 11:34:46 by lvirgini         ###   ########.fr       */
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
		Form	f1("lowLevel", 5, 300);
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

	return (0);
}
