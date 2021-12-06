/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 20:19:07 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/06 13:44:23 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_PHONEBOOK_HPP
# define CLASS_PHONEBOOK_HPP

# include "ClassContact.hpp"

# define MAX_CONTACT	8

class	Phonebook {

	public:

		Phonebook(void);
		~Phonebook(void);

		void	add_new_contact(void);
		int		get_nb_contact(void) const;
		void	display_complete_phonebook(void) const;
		bool	display_this_contact(int index) const ;

	private:

		static int	_nb_contact;
		Contact 	_list_contact[MAX_CONTACT];

		void	_add_nb_contact(void);
		bool	_is_full(void) const ;
};

#endif
