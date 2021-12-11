/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamond.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:17:50 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/11 22:29:06 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_HPP
# define DIAMOND_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <string>

class	Diamond : public ScavTrap, public FragTrap {

	private:
			std::string _name;

	public:

		Diamond(std::string name);
		Diamond(Diamond const & copy);
		~Diamond(void);

		Diamond &	operator=(Diamond const & diams);

/*
** Unique functions
*/

		void		announce(void) const ;
		void		whoAmI(void) const ;

};

#endif
