/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 14:57:32 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/26 15:16:01 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "data.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data	d;

	d.dataInt = 42;
	d.dataStr = "Testing reinterpret cast";

	uintptr_t	p = serialize(&d);
	Data		*ptr_data = deserialize(p);

	std::cout << &d << " : value initial adress" << std::endl;
	std::cout << ptr_data << " : value of ptr_data" << std::endl << std::endl;

	std::cout << ptr_data->dataInt << " " << ptr_data->dataStr << std::endl;

	return (0);
}
