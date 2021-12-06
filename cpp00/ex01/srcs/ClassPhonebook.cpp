/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 20:15:42 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/06 13:43:29 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"
#include "ClassContact.hpp"
#include <iostream>

/*
** Constructor and destructor
*/

Phonebook::Phonebook(void) {

	return ;
}

Phonebook::~Phonebook(void) {
	return ;
}

/*
** Add a new contact in Phonebook.
** if contact is full : swap all and delete first
*/

void	Phonebook::add_new_contact(void) {

	if (this->_is_full())
		this->_list_contact[MAX_CONTACT - 1].setup_contact();
	else
	{
		this->_list_contact[this->get_nb_contact()].setup_contact();
		this->_add_nb_contact();
	}	
}

/*
** Display complete phonebook
*/

void	Phonebook::display_complete_phonebook(void) const {

		for(int i = 0; i < this->_nb_contact; i++)
			this->_list_contact[i].display_tab_contact(i);
}

/*
** Display contact[index] : if this contact exist
*/

bool	Phonebook::display_this_contact(int index) const {

	if (index < 0 || index >= this->_nb_contact)
		return (false);
	this->_list_contact[index].display_contact();
	return (true);
}

/*
** add one to nb_contact
*/

void	Phonebook::_add_nb_contact(void) {

	if (this->_is_full())
		return ;
	this->_nb_contact++;
}

/*
*/

int		Phonebook::get_nb_contact(void) const {

	return (this->_nb_contact);
}

/*
*/

bool	Phonebook::_is_full(void) const {

	if (this->_nb_contact < MAX_CONTACT)
		return (false);
	return (true);
}

int	Phonebook::_nb_contact = 0;
