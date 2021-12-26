/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 15:22:45 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/26 15:26:04 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class	A : public Base
{
	public:

	// constructor
		A(void);
		A(A const & copy);

	// destructor
		virtual ~A(void);

	// operator
		A &		operator=(A const & copy);
};

#endif
