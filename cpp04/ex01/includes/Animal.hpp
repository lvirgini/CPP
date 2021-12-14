/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 23:58:54 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/14 13:54:44 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal 
{
	protected:

		std::string		_type;

	public:

	/*	constructor */
		Animal(void);
		Animal(std::string type);
		Animal(Animal const & animal);
		
	/*	destructor */
		virtual ~Animal(void);

	/*	operator */
		Animal &	operator=(Animal const & animal);


	/*	get	*/
		std::string		getType(void) const ;

	/*	methode	*/
		virtual void	makeSound(void) const ;
};

#endif
