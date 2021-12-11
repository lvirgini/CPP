/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:33:40 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/11 22:55:06 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int		main(void)
{
	ClapTrap karen("Karen");
	ClapTrap kevin("Kevin");
	
	kevin.announce();
	karen.attack(kevin.getName());
	kevin.takeDamage(karen.getAttackDamage());
	kevin.beRepaired(30);
	std::cout << std::endl;
	
	return (0);
}