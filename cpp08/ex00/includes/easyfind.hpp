/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 22:51:26 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/27 23:04:36 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP


// T is a container of int
template < typename T>
void	easyfind(T t, int i)
{
	try
	{
		int result = T.find(i);
		std::cout << "find with (find) in index : " << result << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	int itend = t.end(;)
	for (it = t.begin(); it < itend; it++)
	{
		if (t.data() == i)
		{
			std::cout << "find by iteration in index : " << it << std::endl;
			return ;
		}
	}
	std::cout << "Not found by iteration " << std::endl;
	

}

#endif
