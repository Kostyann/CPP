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
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

int		main()
{

	Bureaucrat	bart = Bureaucrat("Bart", 140);
	Bureaucrat	liza = Bureaucrat("Liza", 1);

	ShrubberyCreationForm	form("Park");
	bart.signForm(form);
	bart.executeForm(form);

	ShrubberyCreationForm	form1("Bank");
	liza.signForm(form1);
	liza.executeForm(form1);

	RobotomyRequestForm	form2("Bender");
	RobotomyRequestForm	form4("Fillip Fry");
	bart.signForm(form2);
	liza.signForm(form2);
	liza.signForm(form4);
	bart.executeForm(form2);
	liza.executeForm(form2);
	liza.executeForm(form4);

	PresidentialPardonForm	form3("Thanos, the Destroyer");
	bart.signForm(form3);
	liza.signForm(form3);
	bart.executeForm(form3);
	liza.executeForm(form3);

	return (0);
}
