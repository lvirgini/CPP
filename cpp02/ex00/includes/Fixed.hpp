/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:39:58 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/07 17:12:29 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed {

	public:

		Fixed(void) ;
		Fixed(Fixed const & f) ;
		~Fixed(void);

		Fixed &		operator=(Fixed const & f);

		int			getRawBits(void) const ;
		void 		setRawBits(int const raw);
		
	private:

		int			_nb;
		static int	_width;
};

#endif
