/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:31:11 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/22 16:10:40 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"
# include <string>

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}

		virtual void 		learnMateria(AMateria*) = 0;
		virtual AMateria	*createMateria(std::string const & type) = 0;
};

#endif
