/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:03:12 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/07 22:37:21 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <Weapon.hpp>

class	HumanB {

	public:
	
		HumanB(std::string name);
		~HumanB(void);

		void	attack(void) const ;
		void	setWeapon(Weapon &weapon);


	private:

	std::string		_name;
	Weapon			*_weapon;

};

#endif
