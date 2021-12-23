/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:56:49 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/23 18:37:46 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>
#include "Form.hpp"
#include <fstream>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

ShrubberyCreationForm::ShrubberyCreationForm(Bureaucrat const & target) : 
	Form("Shruberry", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy) :
	Form(copy), _target(copy._target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

ShrubberyCreationForm &		ShrubberyCreationForm::operator=(ShrubberyCreationForm const & copy)
{
	(void)copy;
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

bool	ShrubberyCreationForm::executeReal(Bureaucrat const & executor)
{
	std::string		fileName = _target.getName() + "_shrubbery";
	std::ofstream	fileTree(fileName.data());

	if (!fileTree)
		return (false);
	fileTree << "               ,@@@@@@@," << std::endl;
	fileTree << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	fileTree << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	fileTree << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	fileTree << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	fileTree << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	fileTree << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	fileTree << "       |o|        | |         | |" << std::endl;
	fileTree << "       |.|        | |         | |" << std::endl;
	fileTree << "jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_"  << std::endl;
	fileTree.close();
	(void)executor;
	return (true);	
}

/* -------------------------------------------------------------------------- */
/*                               Exception                                    */
/* -------------------------------------------------------------------------- */


