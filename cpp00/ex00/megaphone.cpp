/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:46:07 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/06 13:36:07 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
**	megaphone : 
**		toupper of all arguments.
*/

void	ft_megaphone(char **list)
{
	for (int nb_list = 1; list[nb_list];  nb_list++)
		for (int i = 0; list[nb_list][i]; i++)
			std::cout << (char)std::toupper(list[nb_list][i]);
}

int		main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		ft_megaphone(av);
	std::cout << std::endl;
	return (0);
}
