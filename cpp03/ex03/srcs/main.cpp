/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:33:40 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/11 22:38:38 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "Diamond.hpp"
#include "iostream"

int		main(void)
{
	ClapTrap karen("Karen");
	karen.announce();
	ScavTrap serge("Serge");
	serge.announce();
	FragTrap bernard("Bernard");
	bernard.announce();
	Diamond  aurore("Aurore");
	aurore.announce();

	karen.attack("Magicarpe");
	karen.takeDamage(50);
	karen.beRepaired(10);
	std::cout << std::endl;

	serge.attack("Pikachu");
	serge.takeDamage(10);
	serge.beRepaired(20);
	serge.guardGate();
	std::cout << std::endl;

	bernard.attack("metamorphe");
	bernard.takeDamage(10);
	bernard.beRepaired(20);
	bernard.hightFivesGuys();
	std::cout << std::endl;

	aurore.attack("Dialga");
	aurore.takeDamage(10);
	aurore.beRepaired(20);
	aurore.hightFivesGuys();
	aurore.guardGate();
	aurore.whoAmI();
	std::cout << std::endl;

	return (0);	
}
