/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 11:24:24 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/08 11:24:26 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int		main()
{
	Bureaucrat lisa = Bureaucrat("Lisa", 1);
	std::cout << lisa;
	try
	{
		Bureaucrat bart = Bureaucrat("Bart", 160);
		std::cout << bart;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		lisa.upGrade();
		std::cout << lisa;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bart = Bureaucrat("Bart", 150);
		std::cout << bart;
		bart.upGrade();
		std::cout << bart;
		bart.downGrade();
		bart.downGrade();
		std::cout << bart;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}


	return (0);
}
