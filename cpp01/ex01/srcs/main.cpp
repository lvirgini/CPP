/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:08:38 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/04 22:07:33 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

/*
*/

int main(void)
{
	Zombie 		*Z;
	int			nunber_of_zombie = 10;
	std::string	name = "Sam";

	std::cout << nunber_of_zombie << " will be created" << std::endl;
	Z = zombieHorde(nunber_of_zombie, name);

	for (int i = 0; i < nunber_of_zombie; i++)
	{
		std::cout << i << "  ";
		Z[i].announce();
	}

	delete [] Z;
	return (0);
}
