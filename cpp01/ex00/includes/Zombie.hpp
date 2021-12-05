/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:10:53 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/04 21:42:09 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie {

	public:

		Zombie(std::string name);
		~Zombie(void);

		void	announce(void) const ;


	private:

		std::string		_name;
};

/*
** Functions
*/

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif
