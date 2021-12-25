/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 15:27:03 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/25 19:40:40 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

# define NB_FORM 3


class	Intern
{
	private:
		
		typedef struct s_functionForm
		{
			std::string	formName;
			Form		*(*f)(std::string target);
		} t_functionForm;

		static const t_functionForm functionForm[NB_FORM];

	public:

	// constructor
		Intern(void);
		Intern(Intern const & copy);

	// destructor
		~Intern(void);

	// operator
		Intern &		operator=(Intern const & copy);
	
	// functions
		static Form	*createPresidentialForm(std::string target);
		static Form	*createRobotomyForm(std::string target);
		static Form	*createShrubberryForm(std::string target);
		
		Form	*makeForm(std::string typeForm, std::string target);

		class	FormInexisting : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

};

#endif
