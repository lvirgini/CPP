/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:50:47 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/05 14:28:29 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "replace.hpp"


static void	display_use(void) {

	std::cout << std::endl << "./replace <filename> <string1> <string2>" << std::endl;
	std::cout << std::endl << "	<filename> is a file reference" << std::endl;
	std::cout << "	if <string1> is found in <filename>, it will be relace by <string2>" << std::endl;
}

int	display_error(const char *message) {

	std::cerr << "error : " << message << std::endl;
	display_use();
	return (FAILURE);
}

int	main(int argc, char **argv) {

	if (argc != 4)
		return (display_error(ERR_ARGUMENTS_NUMBER));
	return (replace_string_in_file(argv));
}
