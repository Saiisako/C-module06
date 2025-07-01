/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 08:56:01 by skock             #+#    #+#             */
/*   Updated: 2025/07/01 18:18:29 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {*this = copy;}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other) {(void)other; return (*this);}

void	print_inf_f_p()
{
	std::cout << "char : impossible"<< std::endl;
	std::cout << "int : impossible"<< std::endl;
	std::cout << "float : +inff"<< std::endl;
	std::cout << "double : +inf"<< std::endl;
}

void	print_inf_f_n()
{
	std::cout << "char : impossible"<< std::endl;
	std::cout << "int : impossible"<< std::endl;
	std::cout << "float : -inff"<< std::endl;
	std::cout << "double : -inf"<< std::endl;
}

void	print_nan_f()
{
	std::cout << "char : impossible"<< std::endl;
	std::cout << "int : impossible"<< std::endl;
	std::cout << "float : nanf"<< std::endl;
	std::cout << "double : nan"<< std::endl;
}

void	print_inf_p()
{
	std::cout << "char : impossible"<< std::endl;
	std::cout << "int : impossible"<< std::endl;
	std::cout << "float : +inff"<< std::endl;
	std::cout << "double : +inf"<< std::endl;	
}

void	print_inf_n()
{
	std::cout << "char : impossible"<< std::endl;
	std::cout << "int : impossible"<< std::endl;
	std::cout << "float : -inff"<< std::endl;
	std::cout << "double : -inf"<< std::endl;	
}

void	print_nan()
{
	std::cout << "char : impossible"<< std::endl;
	std::cout << "int : impossible"<< std::endl;
	std::cout << "float : nanf"<< std::endl;
	std::cout << "double : nan"<< std::endl;
}

void	print_zero()
{
	std::cout << "char : not printable"<< std::endl;
	std::cout << "int : 0"<< std::endl;
	std::cout << "float : 0.0f"<< std::endl;
	std::cout << "double : 0.0"<< std::endl;
}

int	is_ascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

void	print_int(std::string convert)
{
	std::cout << "int    : ";
	long value = std::atol(convert.c_str());

	if (value >= INT_MAX || value <= INT_MIN)
		std::cout << "out of range" << std::endl;
	else
		std::cout << value << std::endl;
}

void	only_char(std::string convert)
{
	char c = convert[0];
	int i = static_cast<int>(c);
	float f = static_cast<float>(c);
	double d = static_cast<double>(c);
	
	std::cout << "char   :";
	std::cout << " " << c << std::endl;
	std::cout << "int    : ";
	std::cout << i << std::endl;
	std::cout << "float  : "  << f << ".00000f" << std::endl;
	std::cout << "double : "  << d << ".00000" << std::endl;
}

void ScalarConverter::convert(std::string convert)
{
	void (*f[])() = {print_nan, print_nan_f, print_inf_p, print_inf_f_p, print_inf_n, print_inf_f_n, print_zero};
	std::string index[] = {"nan", "nanf", "+inf", "+inff", "-inf", "-inff", "0"};
	for (int i = 0; i < 7; ++i) {
		if (!convert.compare("inf"))
			return f[2]();
		else if (index[i] == convert)
			return f[i]();
	}
	if (convert.length() == 1)
	{
		only_char(convert);
		return ;
	}
	std::cout << "char   :";
	if (is_ascii(atoi(convert.c_str()) && ((atoi(convert.c_str()) >= 0 && atoi(convert.c_str()) <= 31) || atoi(convert.c_str()) == 127)))
		std::cout << " non printable" << std::endl;
	else
		std::cout << (char)atoi(convert.c_str()) << std::endl;
	print_int(convert);
	std::cout << "float  : "  << std::fixed << std::setprecision(5) << std::strtof(convert.c_str(), NULL) << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(5) << std::strtod(convert.c_str(), NULL) << "f" << std::endl;
}
