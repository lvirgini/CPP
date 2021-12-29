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

template < class T>
class	MutantStack : public std::stack<T>
{
	private:
	public:

/*                               Functions                                    */
/* -------------------------------------------------------------------------- */


	/*	class iterator : public std::iterator<T>
		{
			public:
				iterator : std::iterator();
				~iterator : std::iterator();
			};
			
			iterator : std::iterator::iterator : std::iterator()
			{}
			
			iterator : std::iterator::~iterator : std::iterator()
			{}
		};
*/
		MutantStack<T>::iterator begin(void) const
		{
			return (this->pop())
		}

		MutantStack<T>::iterator end(void) const
		{
			return (this->pop() + this->size());
		}
};

#endif
