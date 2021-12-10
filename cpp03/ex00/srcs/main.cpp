/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:33:40 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/10 22:37:09 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int		main(void)
{
	ClapTrap karen("Karen");
	ClapTrap kevin("Kevin");
	ClapTrap serge(kevin);
	ClapTrap serge2(serge);
	

	karen.attack(kevin.getName());
	kevin.takeDamage(karen.getAttackDamage());
	kevin.beRepaired(30);

}