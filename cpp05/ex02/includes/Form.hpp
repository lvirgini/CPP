/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 00:10:00 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/23 18:44:12 by lvirgini         ###   ########.fr       */
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
	
	protected:
		virtual	bool	executeReal(Bureaucrat const & executor) = 0;

	public:

	// constructor
		Form(std::string name, int signGrade, int executionGrade);
		Form(Form const & copy);

	// destructor
		virtual ~Form(void);

	// operator
		Form &		operator=(Form const & copy);
	
	// get

	std::string		getName(void) const ;
	int				getExecutionGrade(void) const ;
	int				getSignedGrade(void) const ;
	bool			getIsSigned(void) const ;


	// functions
	bool			beSigned(Bureaucrat const & b);
	void			execute(Bureaucrat const & executor);


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

	class	UnsignedForm: public std::exception
	{
		public :
			virtual const char *what() const throw();
	};


};

std::ostream & operator<<(std::ostream & out, Form const & b);

#endif
