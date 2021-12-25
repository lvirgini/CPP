/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:50:23 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/25 16:14:58 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	private:
		std::string _target;

	public:

	// constructor
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & copy);

	// destructor
		virtual ~ShrubberyCreationForm(void);

	// operator
		ShrubberyCreationForm &		operator=(ShrubberyCreationForm const & copy);

	// functions
		virtual bool	executeReal(Bureaucrat const & executor);

};

#endif
