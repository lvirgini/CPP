/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 22:51:26 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/30 11:21:17 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>
# include <algorithm> 

// T is a container of int

class easyFindNotFound : public std::exception
{
	public:
		const char * what() const throw() { return "easyFound not found number: "; }
};

template < typename T >
typename T::iterator	easyfind(T & t, int i)
{ 
	typename T::iterator it;
	
	it = std::find(t.begin(), t.end(), i);
	if (it == t.end())
		throw(easyFindNotFound());
	return (it);
}

#endif
