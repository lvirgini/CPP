/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:08:15 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/15 13:50:02 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class	Cat : public Animal
{
	public :

	/*	constructor */
		Cat(void);
		Cat(Cat const & cat);
		
	/*	destructor */
		~Cat(void);

	/*	operator */
		Cat &	operator=(Cat const & cat);


	/*	methode	*/
		virtual void	makeSound(void) const ;
};

#endif
