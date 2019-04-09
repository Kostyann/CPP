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
	try
	{
	//	Form		form = Form("28A", 160, 80);
		int i = 120;
		int j = 70;
		Form		form = Form("28A", i, j);
		std::cout << form;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	Bureaucrat	bart = Bureaucrat("Bart", 130);
	Form		form = Form("28A", 120, 70);
	bart.signForm(form);
	std::cout << form;

	Bureaucrat	liza = Bureaucrat("Liza", 15);
	Form		form1 = Form("28A", 120, 70);
	liza.signForm(form1);
	std::cout << form1;


	return (0);
}
