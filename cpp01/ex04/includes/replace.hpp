/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 12:06:09 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/07 21:55:33 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>

# define FAILURE	1
# define SUCCESS	0

# define ERR_ARGUMENTS_NUMBER "exactly three arguments is needed"
# define ERR_EMPTY "at least one argument is empty"
# define ERR_NOT_FILE "first arguments cannot be open"
# define ERR_OPENING "cannot open file.replace"
# define ERR_EMPTY_FILE "file is empty"

int		display_error(const char *message);
bool	replace_string_in_file(char **argv);

#endif
