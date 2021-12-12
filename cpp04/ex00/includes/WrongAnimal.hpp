/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:56:47 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/12 00:59:05 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal 
{
	protected:

			std::string		_type;

	public:

	/*	constructor */
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const & Wronganimal);
		
	/*	destructor */
		~WrongAnimal(void);

	/*	operator */
		WrongAnimal &	operator=(WrongAnimal const & Wronganimal);


	/*	get	*/
		std::string		getType(void) const ;

	/*	NOT methode	*/
		void	makeSound(void) const ;
};

#endif
