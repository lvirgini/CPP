/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:33:40 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/10 23:15:00 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int		main(void)
{
	ClapTrap karen("Karen");
	ScavTrap kevin("Kevin");
	

	kevin.attack(karen.getName());
	karen.takeDamage(kevin.getAttackDamage());
	karen.beRepaired(30);
	kevin.attack(karen.getName());

	karen.takeDamage(kevin.getAttackDamage());
}