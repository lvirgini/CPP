/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 22:05:20 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/25 19:46:26 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	std::string	sep = "-------------------------------------------------------";
	Intern someRandomIntern;
	Form* shrub = NULL;
	Form* president = NULL;
	Form* robot = NULL;



	Bureaucrat medium("medium", 40);
	Bureaucrat blue("blue", 150);
	Bureaucrat boss("boss", 1);


/* -------------------------------------------------------------------------- */

	std::cout << sep << std::endl;
	std::cout << "try Shrubberry Form : signature 145	Execution 137 : " << std::endl;
	std::cout << sep << std::endl;

	try
	{
		shrub = someRandomIntern.makeForm("shrubberry creation", "Robert");
		std::cout << *shrub << std::endl;

		std::cout << "try execute without sign Form with " << boss << std::endl;
		boss.executeForm(*shrub);
		
		std::cout << std::endl << "try with " << blue << std::endl;
		blue.signForm(*shrub);
		blue.executeForm(*shrub);

		std::cout << std::endl << "try with " << medium << std::endl;
		medium.signForm(*shrub);
		medium.executeForm(*shrub);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	


	std::cout << std::endl << sep << std::endl;
/* -------------------------------------------------------------------------- */
	std::cout << "try Presidential Form : signature 25	Execution 5 : " << std::endl;

	try
	{
 		president = someRandomIntern.makeForm("presidential pardon", "Kevin");
		std::cout << sep << std::endl << *president << std::endl;

		std::cout << "try execute without sign Form with " << boss << std::endl;
		boss.executeForm(*president);
		
		std::cout << std::endl << "try with " << blue << std::endl;
		blue.signForm(*president);
		blue.executeForm(*president);

		std::cout << std::endl << "try with " << medium << std::endl;
		medium.signForm(*president);
		medium.executeForm(*president);

		std::cout << std::endl << "try with " << boss << std::endl;
		boss.signForm(*president);
		boss.executeForm(*president);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
		
	std::cout << sep << std::endl;
/* -------------------------------------------------------------------------- */
	std::cout << "try Robotomy Form : signature 72	Execution 45 : " << std::endl;

	try
	{
	robot = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *robot << std::endl;

		std::cout << std::endl << "try with " << blue << std::endl;
		blue.signForm(*robot);
		blue.executeForm(*robot);

		std::cout << std::endl << "try with " << medium << std::endl;
		medium.signForm(*robot);
		medium.executeForm(*robot);

		std::cout << std::endl << "try with " << boss << std::endl;
		boss.signForm(*robot);
		boss.executeForm(*robot);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << sep << std::endl;
/* -------------------------------------------------------------------------- */

	if (president)
		delete president;
	if (robot)
		delete robot;
	if (shrub)
		delete shrub;

	try
	{
		shrub = someRandomIntern.makeForm("inexisting", "pouet");
	}
		catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
