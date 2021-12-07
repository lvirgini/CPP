/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 12:21:51 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/07 10:36:39 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include <string>
#include <fstream>
#include <ostream>
#include <iostream>


static void	replace_line(std::string s1, std::string s2, std::string &line) {

	size_t found;

	found = 0;
	
	while ((found = line.find(s1, found)) != std::string::npos)
	{
		line.erase(found, s1.size());
		line.insert(found, s2);
		found += s2.size();
	}
}

static bool	copy_in_new_file(std::string s1, std::string s2, std::ifstream &file, std::string filename) {

	std::string		result_name = (filename + ".replace");
	std::ofstream	result(result_name.data());
	std::string		line;

	if (!result)
		return (display_error(ERR_OPENING));
	while (std::getline(file, line))
	{
		replace_line(s1, s2, line);
		result << line << std::endl;
	}
	result.close();
	return (SUCCESS);
}


bool	replace_string_in_file(char **argv)
{
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string		filename = argv[1];
	std::ifstream	file(argv[1]);

	if (s1.empty())
		return (display_error(ERR_EMPTY));
	if (!file)
		return (display_error(ERR_NOT_FILE));
	if (copy_in_new_file(s1, s2, file, filename) == FAILURE)
	{
		file.close();
		return (FAILURE);
	}
	file.close();
	return (SUCCESS);
}
