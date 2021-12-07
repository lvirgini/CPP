/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:17:56 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/07 22:39:29 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {

	this->setType(type);
	return ;
}

Weapon::~Weapon(void) {

	return ;
}

/*
**
*/


std::string		Weapon::getType(void) const {

	return (this->_type);
}

void			Weapon::setType(std::string type) {

	this->_type = type;
}
