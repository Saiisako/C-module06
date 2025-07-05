/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 12:04:37 by skock             #+#    #+#             */
/*   Updated: 2025/07/03 12:52:30 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <sys/time.h>
#include <ctime>
#include <cstdlib>
#include <iostream>

Base *generate()
{
	int r = std::rand();
	r = r % 3;
	if (r == 0)
		return (new A);
	if (r == 1)
		return (new B);
	if (r == 2)
		return (new C);
	return (new A);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Class type is A"<< std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Class type is B"<< std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Class type is C"<< std::endl;
}

void identify(Base& p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "Class type is A"<< std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "Class type is B"<< std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "Class type is C"<< std::endl;
}

int	main(void)
{
	std::srand(std::time(NULL));
	Base *a = generate();
	Base *b = generate();
	Base *c = generate();
	Base *d = generate();
	Base *e = generate();
	Base *f = generate();
	std::cout << "--------------TEST1--------------" << std::endl;
	std::cout << std::endl;
	identify(a);
	identify(b);
	identify(c);
	identify(d);
	identify(e);
	identify(f);
	std::cout << "--------------TEST2--------------" << std::endl;
	std::cout << std::endl;
	identify(*a);
	identify(*b);
	identify(*c);
	identify(*d);
	identify(*e);
	identify(*f);

	delete a;
	delete b;
	delete c;
	delete d;
	delete e;
	delete f;
	return (1);
}