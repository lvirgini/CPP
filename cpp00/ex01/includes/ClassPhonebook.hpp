/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 20:19:07 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/04 14:12:04 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_PHONEBOOK_HPP
# define CLASS_PHONEBOOK_HPP

# define MAX_CONTACT	8

# include "ClassContact.hpp"

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
		void	_swap_contact(void);
		bool	_is_full(void) const ;
};

#endif
