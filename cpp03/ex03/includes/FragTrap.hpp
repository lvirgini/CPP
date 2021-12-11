/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:42:51 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/11 20:34:12 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

# define FRAGTRAP_HITPOINTS 100
# define FRAGTRAP_ENERGY 100
# define FRAGTRAP_DAMAGE 30

class	FragTrap : virtual public ClapTrap {

	public:

/* 
** Constructor Destructor 
*/

		FragTrap(std::string name);
		FragTrap(FragTrap const & tocopy);
		~FragTrap(void);

		FragTrap &	operator=(FragTrap const & Clap);

/*
** Functions
*/
		void	hightFivesGuys(void) const ;
};

#endif
