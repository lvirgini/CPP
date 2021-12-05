/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:08:38 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/04 21:46:30 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

/*
*/

int main(void)
{
	Zombie *Z;

	std::cout << "First creating a zombie by the void randomChump( std::string name ) functions : " << std::endl;
	randomChump("Angel");
	std::cout << "Oops, he is dead outside the function" << std::endl << std::endl;
	

	std::cout << "Now create by pointer with : Zombie* newZombie( std::string name ) : " << std::endl;
	Z = newZombie("Gretel");
	std::cout << "in the MAIN he is alive, we can make another annonce from it : " << std::endl;
	Z->announce();
	std::cout << "but we need to delete him manualy : leaks " << std::endl;

	delete Z;
	return (0);
}
