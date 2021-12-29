/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MUTANTSTACK.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:45:09 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/29 16:36:19 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <exception>
# include <stack>
#include <iterator>

template < typename T>
class	MutantStack : public std::stack<T>
{
	private:
	public:

		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator	 	reverse_iterator;


		iterator			begin(void) ;
		reverse_iterator	rbegin(void) ;
		
		iterator			end(void) ;
		reverse_iterator	rend(void) ;

};


/*                               Functions                                    */
/* -------------------------------------------------------------------------- */


template < typename T>
typename MutantStack<T>::iterator 			MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template < typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin(void)
{
	return (this->c.rbegin());
}

/* -------------------------------------------------------------------------- */

template < typename T>
typename MutantStack<T>::iterator			MutantStack<T>::end(void)
{
	return (this->c.end());
}

template < typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend(void)
{
	return (this->c.rend());
}

#endif
