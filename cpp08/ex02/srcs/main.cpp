/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 16:32:37 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/29 23:06:59 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mutantstack.hpp"
#include <string>
#include <list>

int main()
{

	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		
		std::cout << "test iterator in subject : <int>" << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		
		++it;
		--it;
		
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

/* -------------------------------------------------------------------------- */
	{

		std::cout << std::endl << "test iterator with <string>" << std::endl;
		MutantStack<std::string> strStack;

		strStack.push("one");
		strStack.push("two");
		strStack.push("three");
		strStack.push("four");
		strStack.push("five");

		MutantStack<std::string>::iterator it = strStack.begin();
		MutantStack<std::string>::iterator ite = strStack.end();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		
		std::cout << std::endl << "test reverse iterator with string" << std::endl;
		
		MutantStack<std::string>::reverse_iterator rit = strStack.rbegin();
		MutantStack<std::string>::reverse_iterator rite = strStack.rend();

		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
	}

/* -------------------------------------------------------------------------- */

	{
		std::cout << std::endl << "temoin sur std::list  iterator" << std::endl;
		std::list<std::string> lst;

		lst.push_back("one");
		lst.push_back("two");
		lst.push_back("three");
		lst.push_back("four");
		lst.push_back("five");

		std::list<std::string>::iterator it = lst.begin();
		std::list<std::string>::iterator ite = lst.end();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		
		
		std::cout << std::endl << "temoin sur std::list  reverse iterator" << std::endl;
		
		std::list<std::string>::reverse_iterator rit = lst.rbegin();
		std::list<std::string>::reverse_iterator rite = lst.rend();

		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
	}


/* -------------------------------------------------------------------------- */
	{

		std::cout << std::endl << "test iterator with <list>" << std::endl;
		MutantStack<float> fStack;

		fStack.push( 1.11f);
		fStack.push(2.22f);
		fStack.push(3.33f);


		MutantStack<float>::iterator it = fStack.begin();
		MutantStack<float>::iterator ite = fStack.end();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		
		std::cout << std::endl << "test reverse iterator with string" << std::endl;
		
		MutantStack<float>::reverse_iterator rit = fStack.rbegin();
		MutantStack<float>::reverse_iterator rite = fStack.rend();

		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
	}
	return 0;
}
