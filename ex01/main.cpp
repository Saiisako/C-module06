/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 18:49:08 by skock             #+#    #+#             */
/*   Updated: 2025/07/03 11:12:07 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main()
{
	std::cout << "----------Test1----------" << std::endl;
	Data d = {"Bryan", 42};
	uintptr_t raw = Serializer::serialize(&d);
	Data* ptr = Serializer::deserialize(raw);

	if (ptr == &d)
		std::cout << "pointers matched.\n";
	else
		std::cout << "pointers don't matched.\n";
	std::cout << std::endl;
	
	std::cout << "----------Test2----------" << std::endl;
	Data *data = new Data;
	data->value = 6;
	data->name = "Guvindoor";
	Data *caca = NULL;


	raw = Serializer::serialize(data);
	caca = Serializer::deserialize(raw);

	std::cout << caca->name << " and " << caca->value << std::endl;
}
