/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:59:21 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/22 20:35:37 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure : public AMateria
{
	private:

	public:
	/* operator */	
		Cure(void);
		Cure(Cure const & copy);
	
	/* destructor */
		virtual ~Cure(void);
		
	/* operator */
		Cure &	operator=(Cure const & copy);

	/* methode */
		virtual AMateria	*clone() const;
		virtual void		use(ICharacter & target);
};

#endif
