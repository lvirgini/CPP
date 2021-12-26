/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 17:48:17 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/26 18:20:30 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_TPP
# define TEMPLATE_TPP


template <typename X>
void		swap(X & a, X & b)
{
	X tmp = a;
	a = b;
	b = tmp;
}

template <typename X>
X const &	min(X const & a, X const & b)
{
	return ( (a < b ? a : b));
}

template <typename X>
X const &	max(X const & a, X const & b)
{
	return ( (a > b ? a : b));
}


#endif
