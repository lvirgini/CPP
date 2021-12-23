/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 22:06:05 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/23 19:17:02 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < HIGHEST_GRADE)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > LOWEST_GRADE)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy)
{
	*this = copy;
}

Bureaucrat::~Bureaucrat(void)
{}


/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

Bureaucrat &		Bureaucrat::operator=(Bureaucrat const & copy)
{
	if (this != &copy)
	{
		this->_grade = copy._grade;
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                 Get                                        */
/* -------------------------------------------------------------------------- */

std::string		Bureaucrat::getName() const
{
	return (this->_name);
}
int				Bureaucrat::getGrade() const
{
	return (this->_grade);
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */


void	Bureaucrat::upGrade(void)
{
	try
	{
		if (this->_grade - 1 < HIGHEST_GRADE)
			throw(GradeTooHighException());
		this->_grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	Bureaucrat::downGrade(void)
{
	try
	{
		if (this->_grade + 1 > LOWEST_GRADE)
			throw (GradeTooLowException());
		this->_grade++;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(Form & form) const
{
	try
	{
		if (form.beSigned(*this) == true)
			std::cout << this->_name << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form & form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " execute " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " cannot execute " << form.getName() << " because " <<  e.what() << '\n';
	}
	
}


std::ostream & operator<<(std::ostream & out, Bureaucrat const & b)
{
	std::cout << b.getName() << " bureaucrat grade " << b.getGrade();
	return (out);
}

/* -------------------------------------------------------------------------- */
/*                               Exception                                    */
/* -------------------------------------------------------------------------- */

const char *	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too hight : you are not big brother");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low : you are an artist");
}
