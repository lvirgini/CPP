/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 22:05:20 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/24 18:30:14 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	std::string	sep = "-------------------------------------------------------";
/* -------------------------------------------------------------------------- */

	Bureaucrat medium("medium", 40);
	Bureaucrat blue("blue", 150);
	Bureaucrat boss("boss", 1);

	std::cout << sep << std::endl;
	std::cout << "try Shrubberry Form : signature 145	Execution 137 : " << std::endl;
	std::cout << sep << std::endl;

	Form *shrub = new ShrubberyCreationForm(blue);
	std::cout << *shrub << std::endl;

	std::cout << "try execute without sign Form with " << boss << std::endl;
	boss.executeForm(*shrub);
	
	std::cout << std::endl << "try with " << blue << std::endl;
	blue.signForm(*shrub);
	blue.executeForm(*shrub);

	std::cout << std::endl << "try with " << medium << std::endl;
	medium.signForm(*shrub);
	medium.executeForm(*shrub);


	std::cout << std::endl << sep << std::endl;
/* -------------------------------------------------------------------------- */
	std::cout << "try Presidential Form : signature 25	Execution 5 : " << std::endl;
	std::cout << sep << std::endl;

	Form *president = new PresidentialPardonForm(blue);
	std::cout << *president<< std::endl;

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

	
	std::cout << sep << std::endl;
/* -------------------------------------------------------------------------- */

	std::cout << "try Robotomy Form : signature 72	Execution 45 : " << std::endl;

	Form	*robot = new RobotomyRequestForm(boss);
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


	delete president;
	delete robot;
	delete shrub;

	return (0);
}
