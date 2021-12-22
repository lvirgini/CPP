/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:16:48 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/22 14:43:47 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

#define NB_ANIMALS	4


void	test_subject(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
}

void	test_deep_copy(void)
{
	Dog		*a = new Dog();
	Dog		*b = new Dog();

	b->setBrainIdeas("Trees");
	*a = *b;
	delete b;
	a->displayBrain();
	delete a;
}

void	cat_test_deep_copy(void)
{
	Cat		*a = new Cat();
	Cat		*b = new Cat();

	b->setBrainIdeas("Trees");
	*a = *b;
	delete b;
	a->displayBrain();
	delete a;
}

void	test_deep_copy2(void)
{
	Dog		*a = new Dog();
	Dog		*b = new Dog(*a);

	a->setBrainIdeas("empty file system");
	delete a;
	b->displayBrain();
	delete b;
}

void	cat_test_deep_copy2(void)
{
	Cat		*a = new Cat();
	Cat		*b = new Cat(*a);

	a->setBrainIdeas("empty file system");
	delete a;
	b->displayBrain();
	delete b;
}

void	test_array_of_animals(void)
{
	Animal *all[NB_ANIMALS];

	for (int i = 0; i < NB_ANIMALS; i++)
	{
		if (i < NB_ANIMALS / 2)
			all[i] = new Dog();
		else
			all[i] = new Cat();
	}

	for (int i = 0; i < NB_ANIMALS; i++)
		all[i]->makeSound();

	for (int i = 0; i < NB_ANIMALS; i++)
		delete all[i];
}

int main(void)
{
	test_subject();
	std::cout << std::endl << std::endl;
	test_deep_copy();
	std::cout << std::endl << std::endl;
	test_deep_copy2();
	std::cout << std::endl << std::endl;	
	cat_test_deep_copy();
	std::cout << std::endl << std::endl;
	cat_test_deep_copy2();
	std::cout << std::endl << std::endl;
	test_array_of_animals();

	return (0);
}
