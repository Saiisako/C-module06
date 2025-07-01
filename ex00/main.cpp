/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 08:49:35 by skock             #+#    #+#             */
/*   Updated: 2025/07/01 18:19:33 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	std::cout << "--------------Main test--------------" << std::endl;
	if (ac == 2)
	{
		std::string args = av[1];
		ScalarConverter::convert(args);
		return (0);
	}
	std::cout << "--------------Main test--------------" << std::endl;
	ScalarConverter::convert("a");
	std::cout << std::endl;
	ScalarConverter::convert("1");
	std::cout << std::endl;
	ScalarConverter::convert("0");
	std::cout << std::endl;
	ScalarConverter::convert("-42");
	std::cout << std::endl;
	ScalarConverter::convert("\0");
	std::cout << std::endl;
	ScalarConverter::convert("120");
	std::cout << std::endl;
	ScalarConverter::convert("x");
	std::cout << std::endl;
	std::cout << std::endl;
	ScalarConverter::convert("salut");
	std::cout << std::endl;
	ScalarConverter::convert("nan"); // should print non convertible
	std::cout << std::endl;
	ScalarConverter::convert("inf");
	std::cout << std::endl;
	ScalarConverter::convert("-inf");
	std::cout << std::endl;
	ScalarConverter::convert("nanf");
	std::cout << std::endl;
	ScalarConverter::convert("123456789131854626116161691616161616616"); // error
}