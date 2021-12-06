/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:35:12 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/05 14:41:22 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

class	Karen {

	public : 

	Karen(void);
	~Karen(void);

		void	complain(std::string level);

	private : 


		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);


}

#endif
