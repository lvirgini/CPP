/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 22:06:05 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/22 23:59:32 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <string>
#include <iostream>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < HIGHEST_GRADE)
		throw (GradeTooHightException());
	if (grade > LOWEST_GRADE)
		throw (GradeTooLowException());


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
/*                               Get                                          */
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
		this->_grade--;
		if (this->_grade < HIGHEST_GRADE)
			throw(GradeTooHightException());
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
		this->_grade++;
		if (this->_grade > LOWEST_GRADE)
			throw (GradeTooLowException());
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
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

const char *	Bureaucrat::GradeTooHightException::what() const throw()
 {
	 return ("Grade too hight : you are not big brother");
 }

const char *	Bureaucrat::GradeTooLowException::what() const throw()
 {
	 return ("Grade too low : you are an artist");
 }