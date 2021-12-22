/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:16:48 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/22 15:12:28 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

int main(void)
{
//	Animal	cannot_be_declared;
//	Animal	cannot_be_declared_too = Dog();
	
	Animal	*can_be_declared = new Dog();
	Animal	*can_be_declared_too = new Cat();

	can_be_declared->makeSound();
	can_be_declared_too->makeSound();
	
	delete can_be_declared;
	delete can_be_declared_too;

	return (0);
}
