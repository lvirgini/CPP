/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 15:27:49 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/25 17:27:05 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

Intern::Intern(void)
{}

Intern::Intern(Intern const & copy)
{
	*this = copy;
}

Intern::~Intern(void)
{}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

Intern &		Intern::operator=(Intern const & copy)
{
	(void)copy;
	return (*this);
}


/* -------------------------------------------------------------------------- */
/*                                 Get                                        */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

Form	*Intern::createPresidentialForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::createRobotomyForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::createShrubberryForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(std::string typeForm, std::string target)
{
	for (int i = 0; i < NB_FORM; i++)
		if (typeForm == functionForm[i].formName)
			return (functionForm[i].f(target));
	return (NULL);
}



/* -------------------------------------------------------------------------- */
/*                               Exception                                    */
/* -------------------------------------------------------------------------- */

/*
** used static functions for this.... 
*/


const Intern::t_functionForm Intern::functionForm[NB_FORM] =
{
	{ "Presidential Pardon", &Intern::createPresidentialForm },
	{ "Robotomy Request", &Intern::createRobotomyForm },
	{ "Shrubberry Creation", &Intern::createShrubberryForm},
};
