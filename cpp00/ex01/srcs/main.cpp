/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 20:16:54 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/04 14:26:24 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"
#include "ClassPhonebook.hpp"
#include <string>
#include <iostream>

static void	display_functionality(void) {

	std::cout << std::endl << "* ---------------------------------------------------- *" << std::endl;
	std::cout <<   "* ADD : add a new contact in yout phonebook" << std::endl;
	std::cout << "* SEARCH : search" << std::endl;
	std::cout << "* EXIT : exit this program" << std::endl;
	std::cout << "* ---------------------------------------------------- *" << std::endl << std::endl;
}

static void	search(Phonebook phonebook) {

	int	index;

	phonebook.display_complete_phonebook();
	std::cout << std::endl << "You have actually " << phonebook.get_nb_contact() << " contacts in your phonebook" << std::endl;
	if (phonebook.get_nb_contact() != 0)
	{
		std::cout << "Enter index for seeing a full contact : ";
		std::cin >> index;
		if (phonebook.display_this_contact(index) == false)
			std::cout << "this is not a correct index" << std::endl;
	}
}

int		main(void) {

	Phonebook	phonebook;
	std::string	line;

	std::cout << "Welcome to your Phonebook !" << std::endl;
	display_functionality();
	while (std::cin >> line)
	{
		if (line.compare("ADD") == 0)
			phonebook.add_new_contact();
		else if (line.compare("SEARCH") == 0)
			search(phonebook);
		else if (line.compare("EXIT") == 0 )
			return (0);
		else
			display_functionality();
		std::cout << std::endl;
	}
	return (0);
}
