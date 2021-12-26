/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 15:21:23 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/26 15:28:12 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class	C : public Base
{
	public:

	// constructor
		C(void);
		C(C const & copy);

	// destructor
		virtual ~C(void);

	// operator
		C &		operator=(C const & copy);
};

#endif
