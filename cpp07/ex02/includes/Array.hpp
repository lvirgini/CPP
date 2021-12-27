/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:11:48 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/27 16:31:52 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template< typename T>
class Array 
{
	private:
		T				test;
		T				*tab;
		unsigned int	tabSize;

	public:

		Array(void);
		Array(unsigned int n);
		Array(Array const & copy);
		~Array();

		Array & operator=(Array const & copy);
	//	T 	operator[](int index) ;
		T &	retTest(void);

	// get
		unsigned int	size(void) const ;

		class limitsOverflow : public std::exception
		{
			public:
				virtual const char	* what() const throw();
		};

	// functions

};

#endif
