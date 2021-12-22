/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:36:08 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/22 20:35:33 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Ice : public AMateria
{
	public:
	
	/* operator */	
		Ice(void);
		Ice(Ice const & copy);
	
	/* destructor */
		virtual ~Ice(void);
		
	/* operator */
		Ice &	operator=(Ice const & copy);

	/* methode */
		virtual AMateria	*clone() const ;
		virtual void		use(ICharacter & target);

};

#endif
