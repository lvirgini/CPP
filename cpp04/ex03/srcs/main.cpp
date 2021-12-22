/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:33:51 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/22 21:48:22 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{/*
	Cure	a =  Cure();
	Ice		b = Ice();
	
	AMateria *m1 = new Ice();
	AMateria *m2 = new Cure();

	ICharacter *c1 = new Character("tt");
	c1->equip(m1);
	c1->equip(m2);
	c1->unequip(2);
	c1->unequip(0);
	c1->equip(m2);
	c1->equip(m2);
	c1->equip(m2);

	c1->use(0, *c1);
	c1->use(1, *c1);
	c1->use(2, *c1);
	c1->use(3, *c1);
	c1->use(42, *c1);

	delete c1;
	delete m1;
	delete m2;
	
	*/
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

	// check index
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(42, *bob);

	// check full equipement
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);

	// check delete : 
	me->unequip(42);
	me->unequip(2);
	me->unequip(3);
	me->use(3, *bob);
	
	delete bob;
	delete me;
	delete src;

	return 0;
}
