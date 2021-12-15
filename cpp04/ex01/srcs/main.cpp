/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:16:48 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/15 19:37:57 by lvirgini         ###   ########.fr       */
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

int main(void)
{
/*
	test_subject();
	std::cout << std::endl;
	test_deep_copy();
	std::cout << std::endl;
	test_deep_copy2();
	std::cout << std::endl;	
	cat_test_deep_copy();
	std::cout << std::endl;
	cat_test_deep_copy2();
	std::cout << std::endl;
	*/

	Animal *all = new Animal[NB_ANIMALS];

	for (int i = 0; i < NB_ANIMALS; i++)
	{
		if (i < NB_ANIMALS / 2)
			all[i] = Dog();
		else
			all[i] = Cat();
	}

	delete [] all;
	return (0);
}
