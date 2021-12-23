/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 00:10:00 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/23 15:43:36 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class	Form
{
	private:
		const std::string	_name;
		const int			_executionGrade;
		const int			_signedGrade;
		bool				_isSigned;
	
	public:

	// constructor
		Form(std::string name, int executionGrade, int signGrade);
		Form(Form const & copy);

	// destructor
		~Form(void);

	// operator
		Form &		operator=(Form const & copy);
	
	// get

	std::string		getName(void) const ;
	int				getExecutionGrade(void) const ;
	int				getSignedGrade(void) const ;
	bool			getIsSigned(void) const ;
	// functions

	bool			beSigned(Bureaucrat const & b);

	//exceptions
	class	GradeTooHighException : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};

};

std::ostream & operator<<(std::ostream & out, Form const & b);

#endif
