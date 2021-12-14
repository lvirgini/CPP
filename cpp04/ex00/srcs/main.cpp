/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:16:48 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/14 12:53:23 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void)
{
	const Animal 		*meta = new Animal();
	const Animal 		*dog = new Dog();
	const Animal 		*cat = new Cat();
	const WrongAnimal	*wrongcat = new WrongCat();


	std::cout << std::endl;
	std::cout << "getType = " << dog->getType() << " " << std::endl;
	dog->makeSound(); 

	std::cout <<  "getType = " << cat->getType() << " " << std::endl;
	cat->makeSound();

	std::cout << "getType = " << meta->getType() << " " << std::endl;
	meta->makeSound();

	std::cout << std::endl << "demonstration with no methode with wrongCat and WrongAnimal" << std::endl;
	std::cout << "getType = " << wrongcat->getType() << " " << std::endl;
	wrongcat->makeSound();
	
	std::cout << std::endl;

	delete meta;
	delete dog;
	delete cat;
	delete wrongcat;
	
	return (0);
}
