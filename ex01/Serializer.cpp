/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 18:27:57 by skock             #+#    #+#             */
/*   Updated: 2025/07/02 18:48:53 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::~Serializer() {}

Serializer::Serializer(const Serializer &copy) {*this = copy;}

Serializer& Serializer::operator=(const Serializer &other)
{
	(void)other;
	return (*this);
}

uintptr_t Serializer::serialize(Data *ptr) {return reinterpret_cast<uintptr_t>(ptr);}

Data *Serializer::deserialize(uintptr_t raw) {return reinterpret_cast<Data*>(raw);}
