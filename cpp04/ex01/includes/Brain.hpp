/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 10:09:25 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/14 13:03:22 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define MAX_IDEES	100

#include <string>

class	Brain 
{
	private:
		std::string		_idees[MAX_IDEES];


	public:

		Brain(void) ;
		Brain(std::string idees);
		Brain(Brain const & copy);
		~Brain(void) ;

		Brain &	operator=(Brain const & equal);
		
		std::string	getIdee(int	index) const ;
		void		setIdees(std::string idees);

};

#endif
