/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:45:09 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/28 17:54:39 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>

class	Span
{
	private:
		int				*tab;
		unsigned int	len;
		unsigned int	numberAdded;

	public:

		Span(unsigned int n);
		Span(Span const & copy);
		~Span(void);

		Span &	operator=(Span const & copy);

		void	addNumber(int to_add);
		int		shortestSpan(void) const ;
//		int		longestSpan(void) const ;
		class	tabIsFull : public std::exception
		{
			public:
				const char * what() const throw() { return "tab is full, cannot add another Span";}
		};

};

#endif
