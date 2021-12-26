/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 15:19:53 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/26 15:28:01 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class	B : public Base
{
	public:

	// constructor
		B(void);
		B(B const & copy);

	// destructor
		virtual ~B(void);

	// operator
		B &		operator=(B const & copy);
};

#endif
