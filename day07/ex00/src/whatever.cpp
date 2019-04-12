/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 15:53:25 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/11 15:53:26 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	swap(T & x, T & y){
	T z = x;
	x = y;
	y = z;
}

template <typename T>
T		min(T const & x, T const & y){
	return (x < y) ? x : y;
}

template <typename T>
T		max(T const & x, T const & y){
	return (x > y) ? x : y;
}

void	test_swap()
{
	int		a = 21;
	int		b = 42;

	std::cout << "Swap of INT value a - " << a << " and b - " << b << std::endl;
	swap<int>(a, b);
	std::cout << "Result a = " << a << ", b = " << b << std::endl;

	float		c = 21.3f;
	float		d = 21.4f;

	std::cout << "Swap of FLOAT value c - " << c << " and d - " << d << std::endl;
	swap<float>(c, d);
	std::cout << "Result c = " << c << ", d = " << d << std::endl;

	char		e = 'e';
	char		f = 'f';

	std::cout << "Swap of CHAR value e - " << e << " and f - " << f << std::endl;
	swap<char>(e, f);
	std::cout << "Result e = " << e << ", f = " << f << std::endl;
}

void	test_min()
{
	int		a = 21;
	int		b = 42;

	std::cout << "Min INT value between " << a << " and " << b;
	std::cout << " is - " << min<int>(a, b) << std::endl;

	float		c = 21.3f;
	float		d = 21.4f;

	std::cout << "Min FLOAT value between " << c << " and " << d;
	std::cout << " is - " << min<float>(c, d) << std::endl;

	char		e = 'e';
	char		f = 'f';

	std::cout << "Min CHAR value between " << e << " and " << f;
	std::cout << " is - " << min<char>(e, f) << std::endl;
}

void	test_max()
{
	int		a = 21;
	int		b = 42;

	std::cout << "Max INT value between " << a << " and " << b;
	std::cout << " is - " << max<int>(a, b) << std::endl;

	float		c = 21.3f;
	float		d = 21.4f;

	std::cout << "Max FLOAT value between " << c << " and " << d;
	std::cout << " is - " << max<float>(c, d) << std::endl;

	char		e = 'e';
	char		f = 'f';

	std::cout << "Max CHAR value between " << e << " and " << f;
	std::cout << " is - " << max<char>(e, f) << std::endl;
}


int		main()
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

/*	test_swap();
	std::cout << "-----------------------------------" << std::endl;
	test_min();
	std::cout << "-----------------------------------" << std::endl;
	test_max(); */

	return (0);
}
