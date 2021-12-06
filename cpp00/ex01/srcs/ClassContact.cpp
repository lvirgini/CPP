/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:25:47 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/06 13:45:19 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <ctype.h>

# define LINE_BUFFER_MAX	126

/*
** Constructor, Destructor
*/

Contact::Contact(void) {

	return ;
}

Contact::~Contact(void) {

	return ;
}


/*
** Get all informations for creating new contact from stdin
**	with getline (for get empty string)
*/


static std::string	get_only_digits(void)
{
	std::string			str;
	
	std::getline(std::cin, str);
	for (size_t i = 0; i < str.length(); i++)
	{
		if (isdigit(str.at(i)) == 0)
			return ("");
	}
	return (str) ;
}

/*
** Get new contact value from stdin // pb avec getline et recuperer uniquement des digits pour phonenumber
*/

void	Contact::setup_contact(void) {

	std::cout << "Enter first name : ";
	std::getline(std::cin, this->_first_name);
	std::cout << "Enter last name : ";
	std::getline(std::cin, this->_last_name);
	std::cout << "Enter nickname : ";
	std::getline(std::cin,this->_nickname);
	std::cout << "Enter phone number : ";
	this->_phone_number = get_only_digits();
	std::cout << "Enter darkest secret : ";
	std::getline(std::cin,this->_darkest_secret);
	}

/*
** Display complete information from one contact
*/

void	Contact::display_contact(void) const {

	std::cout << "First name	:" << this->_first_name << std::endl;
	std::cout << "Last name	:" << this->_last_name << std::endl;
	std::cout << "Nickname	:" << this->_nickname << std::endl;
	std::cout << "Phone number	:" << this->_phone_number << std::endl;
	std::cout << "Darkest secret	:" << this->_darkest_secret << std::endl;
}

/*
** Display contact in a tab
**	| 	index |	firstname	|	lastname	|	nickname	|
**
**	each colomn are 10 width. (setw(10)) separate with '|'
**	if > 10 : indice 10 is replace by '.'
*/

static std::string	adjust_colomn(std::string str) {

	size_t	size = str.size();

	if (size > 10)
		str.insert(9, ".").resize(10);
	return (str);
}

void	Contact::display_tab_contact(int index) const {

	if (index == 0)
	{
		std::cout << "|" << std::setw(10) << "index" << "|";
		std::cout << std::setw(10) << "firstname" << '|';
		std::cout << std::setw(10) << "last name" << '|';
		std::cout << std::setw(10) << "nickname" << '|' << std::endl;
	}
	std::cout << "|" << std::setw(10) << index + 1 << '|';
	std::cout << std::setw(10) << adjust_colomn(this->_first_name) << '|';
	std::cout << std::setw(10) << adjust_colomn(this->_last_name) << '|';
	std::cout << std::setw(10) << adjust_colomn(this->_nickname) << '|' << std::endl;	
}
