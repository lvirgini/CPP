/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:08:38 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/07 19:38:41 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

/*
*/

int main(void)
{
	Zombie 		*z;
	int			number_of_zombie = 10;
	std::string	name = "Sam";

	std::cout << number_of_zombie << " will be created" << std::endl;
	z = zombieHorde(number_of_zombie, name);

	for (int i = 0; i < number_of_zombie; i++)
	{
		std::cout << i << "  ";
		z[i].announce();
	}

	delete [] z;
	return (0);
}
