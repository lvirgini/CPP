/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:21:25 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/22 20:44:33 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class	ICharacter;

class	AMateria
{
	protected:
		std::string	_type;
		
	public:

	/* constructor */
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & copy);
		virtual ~AMateria(void);

	/* operator */
		AMateria &	operator=(AMateria const & copy);

	/* get */
		std::string const & getType(void) const;

	/* methode */
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter & target);
};

#endif
