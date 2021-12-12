/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:48:01 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/12 00:55:56 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>

class	WrongCat : public WrongAnimal
{
	public :

	/*	constructor */
		WrongCat(void);
		WrongCat(WrongCat const & copy);
		
	/*	destructor */
		~WrongCat(void);

	/*	operator */
		WrongCat &	operator=(WrongCat const & wc);


	/*	NOT methode	*/
		void	makeSound(void) const ;
};

#endif
