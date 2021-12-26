/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 15:22:03 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/26 15:28:55 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class	Base
{
	public:

	// constructor
		Base(void);
		Base(Base const & copy);

	// destructor
		virtual ~Base(void);

	// operator
		Base &		operator=(Base const & copy);
};

#endif
