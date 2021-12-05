/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:53:26 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/04 22:58:55 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void) {

	std::string		str = "HI THIS IS BRAIN";

	std::string		*stringPTR = &str;
	std::string		&stringREF = str;

	std::cout << "adress of string by stringPTR : " << stringPTR << std::endl;
	std::cout << "adress of string by stringREF : " << &stringREF << std::endl;

	std::cout << "string by stringPTR : " << *stringPTR << std::endl;
	std::cout << "string by stringREF : " << stringREF << std::endl;

	return (0);
}