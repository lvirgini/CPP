/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:33:51 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/23 12:03:35 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	std::cout << std::endl;


	// check index
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;


	me->use(2, *bob);
	me->use(3, *bob);
	me->use(42, *bob);
	std::cout << std::endl;


	// check full equipement
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	std::cout << std::endl;

	// check delete : 
	me->unequip(42);
	me->unequip(2);
	me->unequip(3);
	me->use(3, *bob);
	std::cout << std::endl;
	
	delete bob;
	delete me;
	delete src;

	return 0;
}
