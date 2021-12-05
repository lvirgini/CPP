/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:10:53 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/04 22:05:47 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie {

	public:

		Zombie(void);
		~Zombie(void);

		void	announce(void) const ;
		void	give_him_a_name(std::string name) ;

	private:

		std::string		_name;
};

/*
** Functions
*/

Zombie* zombieHorde( int N, std::string name );

#endif
