/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:11:48 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/27 18:57:29 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template< typename T>
class Array 
{
	private:
		T				*tab;
		unsigned int	tabSize;

	public:


/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

		Array(void)
		{
			this->tab = new T[0];
		};

		Array(unsigned int n)
		{
			this->tabSize = n;
			this->tab = new T[n];
		};

		Array(Array const & copy)
		{
			this->tabSize = copy.size();
			this->tab = new T[this->tabSize];
			for (unsigned int i = 0; i < tabSize; i++)
				this->tab[i] = copy.tab[i];	
		};

		~Array(void)
		{
			delete [] this->tab;
		};

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */


		Array & operator=(Array const & copy)
		{
			if (*this != copy)
			{
				delete [] this->tab;
				this->tabSize = copy.getSize();
				this->tab = new T[this->tabSize];
				for (unsigned int i = 0; i < tabSize; i++)
					this->tab[i] = copy.tab[i];	
			}
			return (*this);
		}
		
		T & 	operator[](int index)
		{
			if (index < 0 || index >= static_cast<int>(this->tabSize))
				throw(limitsOverflow());
			return (this->tab[index]);
		}

/* -------------------------------------------------------------------------- */
/*                                 Get                                        */
/* -------------------------------------------------------------------------- */

		unsigned int	size(void) const 
		{
			return this->tabSize;
		};

/* -------------------------------------------------------------------------- */
/*                               Exception                                    */
/* -------------------------------------------------------------------------- */


		class limitsOverflow : public std::exception
		{
			public:
				virtual const char	* what() const throw()
				{ 
					return ("index is out of range ");
				};
		};

	// functions

};

#endif
