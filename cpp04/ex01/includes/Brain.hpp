/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 10:09:25 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/14 18:04:22 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define MAX_IDEAS	10

#include <string>

class	Brain 
{
	private:
		std::string		_ideas[MAX_IDEAS];


	public:

	/*	constructor */
		Brain(void) ;
		Brain(std::string ideas);
		Brain(Brain const & copy);

	/*	destructor */
		~Brain(void) ;

	/*	operator */
		Brain &	operator=(Brain const & equal);
	
	/*	get	- set */
		std::string	getIdea(int	index) const ;
		void		setIdeas(std::string ideas);
		void		printIdeas(void) const ;

};

#endif
