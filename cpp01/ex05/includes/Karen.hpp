/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:35:12 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/06 16:15:37 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# define NB_LVL	4

class	Karen {

	public : 

	Karen(void);
	~Karen(void);

		void	complain(std::string level);
		typedef		void	(Karen::*ft_karen)(void) ;

	private : 


		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);

};


#endif
