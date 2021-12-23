/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:50:23 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/23 18:58:36 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	private:
		Bureaucrat const & _target;

	public:

	// constructor
		ShrubberyCreationForm(Bureaucrat const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & copy);

	// destructor
		virtual ~ShrubberyCreationForm(void);

	// operator
		ShrubberyCreationForm &		operator=(ShrubberyCreationForm const & copy);

	// functions
		virtual bool	executeReal(Bureaucrat const & executor);

};

#endif
