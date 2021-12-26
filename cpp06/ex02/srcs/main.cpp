/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 15:29:14 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/26 15:49:56 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime>

Base * generate(void)
{
	std::srand(std::time(NULL));

	int	random = std::rand();
	
	if (random % 3 == 0)
		return (new A());
	if (random % 3 == 1)
		return (new B());
	return (new (C));
}

void identify(Base* p)
{
	std::cout << "identify class with pointer" << std::endl;

	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "class is A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "class is B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "class is C" << std::endl;
}


void identify(Base& p)
{
	std::cout << "identify class with reference" << std::endl;

/* -------------------------------------------------- */
	try
	{
		dynamic_cast<A &>(p);
		std::cout << "class is A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << std::endl;
	}

/* -------------------------------------------------- */

	try
	{
		dynamic_cast<B &>(p);
		std::cout << "class is B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << std::endl;
	}

/* -------------------------------------------------- */

	try
	{
		dynamic_cast<C &>(p);
		std::cout << "class is C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << std::endl;
	}
	
}



int main(void)
{
	Base	*b = generate();

	identify(b);
	identify(*b);

	delete b;

	return (0);
}