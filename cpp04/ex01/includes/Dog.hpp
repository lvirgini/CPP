/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:08:15 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/14 16:24:18 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class	Dog : public Animal
{
	private:

		Brain	*_dogBrain;

	public :

	/*	constructor */
		Dog(void);
		Dog(Dog const & dog);
		
	/*	destructor */
		virtual ~Dog(void);

	/*	operator */
		Dog &	operator=(Dog const & dog);


	/*	methode	*/
		virtual void	makeSound(void) const ;
		void			setBrainIdeas(std::string ideas);
		void			displayBrain(void) const ;

};

#endif
