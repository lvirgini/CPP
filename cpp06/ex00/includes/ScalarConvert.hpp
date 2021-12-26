/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 23:38:51 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/26 14:32:41 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERT_HPP
# define SCALAR_CONVERT_HPP

# include <string>

class	ScalarConvert
{
	private:
		enum	e_type
		{
			IS_DOUBLE,
			IS_INT,
			IS_NAN
		};

		int				type;
		std::string		s;
		double			doubleValue;

		int		foundType(void) ;
		void	printChar(void) const ;
		void	printInt(void) const ;
		void	printFloat(void) const ;
		void	printDouble(void) const ;


	public:

	// constructor
		ScalarConvert(std::string s);
		ScalarConvert(ScalarConvert const & copy);

	// destructor
		~ScalarConvert(void);

	// operator
		ScalarConvert &		operator=(ScalarConvert const & copy);
	
	// functions
	int		convertInt(void) const ;
	char	convertChar(void) const ;
	float	convertFloat(void) const ;
	double	convertDouble(void) const ;
	void	printAllValues(void) const ;
};

#endif
