/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:42:51 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/09 18:12:28 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

# define CLAPTRAP_HITPOINTS 10
# define CLAPTRAP_ENERGY 10

class	ClapTrap {

	private:

		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_attack_damage;
		unsigned int	_energy_point;

	public:

	ClapTrap(std::string name);
//	ClapTrap(ClapTrap const & tocopy);
	~ClapTrap(void);


	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif