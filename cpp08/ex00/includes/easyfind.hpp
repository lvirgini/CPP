/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 22:51:26 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/29 15:48:31 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>
# include <algorithm> 


// T is a container of int

template < typename T >
typename T::iterator	easyfind(T & t, int i)
{ 
	typename T::iterator it;
	
	it = std::find(t.begin(), t.end(), i);
	if (it == t.end())
		throw(SpanIsNotFound());
	return (it);
}

#endif
