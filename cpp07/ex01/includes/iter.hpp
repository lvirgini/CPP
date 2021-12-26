/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 18:34:10 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/26 18:39:17 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template < typename Adress, typename Lenght, typename Func>
void	iter(Adress const & tab, Lenght const & size, Func const & function)
{
	for (Lenght i = 0, i < size, i++)
	{
		function(tab[i]);
	}
}

#endif
