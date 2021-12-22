/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:35:51 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/22 20:56:10 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

# define MAX_MATERIA_SOURCE 4
class	MateriaSource : public IMateriaSource
{
	private:
		AMateria *_slot[MAX_MATERIA_SOURCE];

	public:
	/* operator */	
		MateriaSource(void);
		MateriaSource(MateriaSource const & copy);
	
	/* destructor */
		virtual ~MateriaSource(void);
		
	/* operator */
		MateriaSource &	operator=(MateriaSource const & copy);

	/* methode */
		virtual void 		learnMateria(AMateria*);
		virtual AMateria	*createMateria(std::string const & type);

};

#endif
