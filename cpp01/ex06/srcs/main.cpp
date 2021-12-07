/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:35:46 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/07 10:27:10 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

static void	switch_karen_message(int lvl) {

	Karen		k;

	switch (lvl) {

			case K_DEBUG: 
				k.complain(K_DEBUG);
			case K_INFO:
				k.complain(K_INFO);
			case K_WARNING: 
				k.complain(K_WARNING);
			case K_ERROR: 
				k.complain(K_ERROR);
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

}

static int	find_level(std::string str) {

	std::string	check_index[NB_LVL] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for (int i = 0; i < NB_LVL; i++)
	{
		if (str.compare(check_index[i]) == 0)
			return (i);
	}
	return (-1);
}

int	main(int ac, char **av) {

	int			lvl;	

	if (ac != 2)
	{
		std::cerr << "Usage : ./karen-filter <level>" << std::endl;
		return (1);
	}
	lvl = find_level(av[1]);
	switch_karen_message(lvl);
	return (0);
}
