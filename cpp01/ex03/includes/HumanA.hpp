/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:03:57 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/07 22:37:29 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class	HumanA {

	public:
	
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void	attack(void) const ;

	private:

	std::string		_name;
	Weapon			&_weapon;

};

#endif
