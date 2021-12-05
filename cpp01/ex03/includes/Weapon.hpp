/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:04:39 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/04 23:41:22 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class	Weapon {

	public:

		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);

		std::string		getType(void);
		void			setType(std::string type);

	private:

		std::string		_type;
};

#endif