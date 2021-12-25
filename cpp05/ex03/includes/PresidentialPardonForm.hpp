/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:48:40 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/25 16:06:40 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_CREATION_FORM_HPP
# define PRESIDENTIAL_CREATION_FORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"

class	PresidentialPardonForm : public Form
{
	private:
		std::string _target;
	public:

	// constructor
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & copy);

	// destructor
		virtual ~PresidentialPardonForm(void);

	// operator
		PresidentialPardonForm &		operator=(PresidentialPardonForm const & copy);
	
	// functions
		virtual bool	executeReal(Bureaucrat const & executor);

};

#endif
