/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:50:26 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/04 22:03:06 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name ) {

	Zombie *Z = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		Z[i].give_him_a_name(name);
	return (Z);
}
