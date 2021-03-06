/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 00:12:27 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/23 16:33:26 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

Form::Form(std::string name, int executionGrade, int signGrade) :
	_name(name),
	_executionGrade(executionGrade),
	_signedGrade(signGrade)
{
	if (executionGrade < HIGHEST_GRADE || signGrade < HIGHEST_GRADE)
		throw (Form::GradeTooHighException());
	if (executionGrade > LOWEST_GRADE || signGrade > LOWEST_GRADE)
		throw (Form::GradeTooLowException());
	this->_isSigned = false;
}

Form::Form(Form const & copy) :
	_name(copy._name),	
	_executionGrade(copy._executionGrade),
	_signedGrade(copy._signedGrade)
{
	this->_isSigned = copy._isSigned;
}

Form::~Form(void)
{}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

Form &		Form::operator=(Form const & copy)
{
	this->_isSigned = copy._isSigned;
	return (*this);
}


/* -------------------------------------------------------------------------- */
/*                                 Get                                        */
/* -------------------------------------------------------------------------- */

std::string		Form::getName(void) const
{
	return (this->_name);
}

int		Form::getExecutionGrade(void) const
{
	return (this->_executionGrade);
}

int		Form::getSignedGrade(void) const
{
	return (this->_signedGrade);
}

bool			Form::getIsSigned(void) const
{
	return (this->_isSigned);
}

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

	bool			Form::beSigned(Bureaucrat const & b)
	{
		if (this->_isSigned == true)
		{
			std::cout << "form already signed" << std::endl;
			return (false);
		}
		if (b.getGrade() > this->_signedGrade)
			throw(Form::GradeTooLowException());
		this->_isSigned = true;
		return (true);
	}


/* -------------------------------------------------------------------------- */
/*                               Exception                                    */
/* -------------------------------------------------------------------------- */

const char *	Form::GradeTooHighException::what() const throw()
{
	return ("Form: Grade too hight");
}

const char *	Form::GradeTooLowException::what() const throw()
{
	return ("Form: Grade too low");
}





/* -------------------------------------------------------------------------- */
std::ostream & operator<<(std::ostream & out, Form const & form)
{
	std::cout << "Forms : \"" << form.getName();
	if (form.getIsSigned() == true)
		std::cout << "\" : is signed" << std::endl;
	else
		std::cout << "\" : is unsigned" << std::endl;
	std::cout << "	grade " << form.getSignedGrade() << " for signed form" << std::endl;
	std::cout << "	grade " << form.getExecutionGrade() << " for execute form" << std::endl;
	return (out);
}
