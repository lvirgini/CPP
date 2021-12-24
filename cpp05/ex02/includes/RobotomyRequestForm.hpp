/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:50:28 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/24 18:30:49 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class	RobotomyRequestForm : public Form
{
	private:
		Bureaucrat const & _target;

	public:

	// constructor
		RobotomyRequestForm(Bureaucrat const & target);
		RobotomyRequestForm(RobotomyRequestForm const & copy);

	// destructor
		virtual ~RobotomyRequestForm(void);

	// operator
		RobotomyRequestForm &	operator=(RobotomyRequestForm const & copy);

	// functions
		virtual bool	executeReal(Bureaucrat const & executor);

};

#endif
