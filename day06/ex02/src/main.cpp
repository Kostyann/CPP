/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 17:39:33 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/10 17:39:35 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <time.h>

class Base		{public: virtual ~Base(void){}};
class A: public Base{};
class B: public Base{};
class C: public Base{};

Base	*generate(void)
{
	Base *base;

	srand(time(0) + rand());
	int i = rand() % 3;

	switch (i){
		case 0: base = new A;
			break;
		case 1: base = new B;
			break;
		case 2: base = new C;
			break;
	}
	return base;
}

void	identify_from_pointer(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	if (a)
		std::cout << "A" << std::endl;
	else
	{
		B *b = dynamic_cast<B *>(p);
		if (b)
			std::cout << "B" << std::endl;
		else
		{
			C *c = dynamic_cast<C *>(p);
			if (c)
				std::cout << "C" << std::endl;
			else
				std::cout << "Conversion is not OK" << std::endl;
		}
	}
}

void	identify_from_reference(Base &p)
{
	try {
		A &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch (std::bad_cast &bc){
		try {
			B &b = dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
			(void)b;
		}
		catch (std::bad_cast &bc){
			try {
				C &c = dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
				(void)c;
			}
			catch (std::bad_cast &bc){
				std::cout << "Conversion is not OK:" << bc.what() << std::endl;
			}
		}
	}

}


int		main()
{
	Base *sample = generate();

	std::cout << "Identify from pointer:   ";
	identify_from_pointer(sample);
	std::cout << "Identify from reference: ";
	identify_from_reference(*sample);

	return (0);
}
