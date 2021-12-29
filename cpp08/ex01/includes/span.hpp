/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:45:09 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/29 18:15:02 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
#include <list>

class	Span
{
	private:
		unsigned int	_maxSize;
		std::list<int>	_tab;

	public:


/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

		Span(unsigned int n);
		Span(Span const & copy);
		~Span(void);

/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

		Span &	operator=(Span const & copy);


/*                               Functions                                    */
/* -------------------------------------------------------------------------- */
		template <typename Iterator>
		void	addNumber(Iterator it, Iterator ite)
		{
			for (; it != ite; it++)
				this->addNumber(*it);
		}
		void	addNumber(int to_add);
		int		shortestSpan(void) const ;
		int		longestSpan(void) const ;
		void	display(void) const ;


/*                               Exception                                    */
/* -------------------------------------------------------------------------- */

		class	SpanIsFull : public std::exception
		{
			public:
				const char * what() const throw() { return "tab is full, cannot add another Span";}
		};

		class	SpanIsEmpty : public std::exception
		{
			public:
				const char * what() const throw() { return "tab is empty, cannot add another Span";}
		};

		class SpanIsNotFound : public std::exception
		{
			public:
				const char *what() const throw() {return "not found"; }
		};

		class SpanNotEnoughNumber: public std::exception
		{
			public:
				const char *what() const throw() {return "not found"; }
		};

};

#endif
