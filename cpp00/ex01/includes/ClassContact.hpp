/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:25:52 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/04 13:39:09 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CONTACT_HPP
# define CLASS_CONTACT_HPP

# include <string>

class	Contact {

	public:
	
		Contact(void) ;
		~Contact(void);

		void		setup_contact(void) ;
		void		display_contact(void) const ;
		void		display_tab_contact(int index) const ;


	private:

		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_darkest_secret;
		std::string		_phone_number;
};

#endif
