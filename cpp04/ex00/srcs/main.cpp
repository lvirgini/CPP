/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:16:48 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/12 10:03:01 by lvirgini         ###   ########.fr       */
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
	
	std::cout << dog->getType() << " " << std::endl;
	dog->makeSound(); 

	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();

	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();

	std::cout << std::endl << "demonstration with no methode with wrongCat and WrongAnimal" << std::endl;
	std::cout << wrongcat->getType() << " " << std::endl;
	wrongcat->makeSound();
	
	std::cout << std::endl;
	return (0);
}
