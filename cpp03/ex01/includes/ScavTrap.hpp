/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:42:51 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/10 23:09:57 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

# define SCAVTRAP_HITPOINTS 100
# define SCAVTRAP_ENERGY 50
# define SCAVTRAP_DAMAGE 20

class	ScavTrap : public ClapTrap {

	public:

/* 
** Constructor Destructor 
*/

		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & tocopy);
		~ScavTrap(void);

		ScavTrap &	operator=(ScavTrap const & Clap);

/*
** Functions
*/
		// void	attack(std::string const & target);
		// void	takeDamage(unsigned int amount);
		// void	beRepaired(unsigned int amount);

/*
** functions get something
*/
		// unsigned int	getAttackDamage(void);
		// unsigned int	getHitPoint(void);
		// unsigned int	getEnergyPoint(void);
		// std::string		getName(void);
};

#endif