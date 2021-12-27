/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 18:34:10 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/27 22:33:07 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template < typename T, typename Lenght >
void	iter2(T *tab, Lenght const & size, T (&function)(T))
{
	for (Lenght i = 0; i < size; i++)
	{
		tab[i] = function(tab[i]);
	}
}

template < typename T, typename Lenght >
void	iter(T *tab, Lenght const & size, void (&function)(T const &))
{
	for (Lenght i = 0; i < size; i++)
	{
		function(tab[i]);
	}
}

template < typename T >
void print(T const & t)
{
	std::cout << t << std::endl;
}

#endif
