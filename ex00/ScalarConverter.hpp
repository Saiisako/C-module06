/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 08:53:27 by skock             #+#    #+#             */
/*   Updated: 2025/07/01 16:05:33 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <limits.h>
#include <algorithm>
#include <cerrno>


class ScalarConverter
{
	public:
		ScalarConverter();
		virtual ~ScalarConverter() = 0;
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter& operator=(const ScalarConverter& other);
		static void convert(std::string convert);
};
