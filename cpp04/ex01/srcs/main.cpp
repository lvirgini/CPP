/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:16:48 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/12 12:19:30 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <iostream>

#define NB_ANIMALS	2
int main(void)
{
/*	const Animal* j = new Dog();
	const Animal* i = new Cat();
	

	delete j;//should not create a leak
	delete i;
	*/


	std::cout << "tab of Animals : half Cat, half Dog created : " << std::endl;
	Animal *tab[2];
	for (int i = 0; i < NB_ANIMALS; i++)
	{
		if (i < 1)
			tab[i] = new Cat();
		else
			tab[i] = new Dog();
	}

	// Cat	*ptr_cat = tab[0];
	// Cat *ptr_dog = tab[NB_ANIMALS - 1];

	std::cout << "tab of Animals : half Cat, half Dog getType() then makeSound() then destroy() : " << std::endl;
	for (int i = 0; i < NB_ANIMALS; i++)
	{
		std::cout << "Animal[" << i << "] = ";
		tab[i]->getType();
		tab[i]->makeSound();
		delete tab[i];
	}



	return (0);
}
