/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 00:10:00 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/23 00:14:41 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>

class	Form
{
	private:
		const std::string	_name;
		const int			_grade_required;
		bool				_is_signed;
	public:

	// constructor
		Form(void);
		Form(Form const & copy);

	// destructor
		~Form(void);

	// operator
		Form &		operator=(Form const & copy);
	
	// get

	// functions

};

#endif
