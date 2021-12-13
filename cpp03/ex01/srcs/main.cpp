/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:33:40 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/13 13:55:16 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "iostream"

int		main(void)
{
	ClapTrap karen("Karen");
	karen.announce();
	ScavTrap serge("Serge");
	serge.announce();
	
	karen.attack("Magicarpe");
	karen.takeDamage(50);
	karen.beRepaired(10);
	std::cout << std::endl;

	serge.attack("Pikachu");
	serge.takeDamage(10);
	serge.beRepaired(20);
	serge.guardGate();
	std::cout << std::endl;
}
