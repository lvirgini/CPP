/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:45:09 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/29 15:46:59 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
#include <list>
class	Span
{
	private:
		int				*tab;
		unsigned int	_len;
		unsigned int	_numberAdded;

	public:

		Span(unsigned int n);
		Span(Span const & copy);
		~Span(void);

		Span &	operator=(Span const & copy);
		int		operator[](unsigned int index) const
		{
			if ( index >= this->_numberAdded || !this->tab)
				throw(SpanIndexOutOfRange());
			return (this->tab[index]);
		}


/*
		template < typename T>
		void	addNumber(typename T::iterator it, typename T::iterator ite)
		{
			for (; it != ite; it++)
				this->addNumber(*it);
		}
*/
		template <typename Iterator>
		void	addNumber(Iterator it, Iterator ite)
		{
			for (; it != ite; it++)
				this->addNumber(*it);
		}
		void	addNumber(int to_add);
		int		shortestSpan(void) const ;
//		int		longestSpan(void) const ;
		void	displayTab(void);


		class	SpanIsFull : public std::exception
		{
			public:
				const char * what() const throw() { return "tab is full, cannot add another Span";}
		};

		class SpanIsNotFound : public std::exception
		{
			public:
				const char *what() const throw() {return "not found"; }
		};

		class SpanIndexOutOfRange : public std::exception
		{
			public:
				const char *what() const throw() {return "not found"; }
		};

};


#endif
