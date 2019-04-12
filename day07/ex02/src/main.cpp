/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 12:44:31 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/12 12:44:32 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"
#include "../include/Bureaucrat.hpp"

void	intArray()
{
	Array<int> 	ar(6);
	Array<int>	array(ar);

	try {
		int n = ar[8];
		std::cout << n << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		int n = ar[3];
		ar[3] = 7;
		int p = array[3];
		array[3] = 4;
		std::cout << n << std::endl;
		std::cout << ar[3] << std::endl;
		std::cout << p << std::endl;
		std::cout << array[3] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	doubArray()
{
	Array<double> 	ar(6);
	Array<double>	array(ar);

	try {
		double n = ar[8];
		std::cout << n << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		double n = ar[3];
		ar[3] = 7.35345;
		double p = array[3];
		array[3] = 4.535345;
		std::cout << n << std::endl;
		std::cout << ar[3] << std::endl;
		std::cout << p << std::endl;
		std::cout << array[3] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	hellArray()
{
	Array<Bureaucrat> 	ar(6);
	Array<Bureaucrat>	array(ar);

	try {
		Bureaucrat n = ar[8];
		std::cout << n << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat n = ar[3];
		ar[3].upGrade();
		ar[3].upGrade();
		Bureaucrat p = array[3];
		array[3].upGrade();
		std::cout << n;
		std::cout << ar[3];
		std::cout << p;
		std::cout << array[3];
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

int		main()
{
	intArray();
	doubArray();
	hellArray();

	return (0);
}
