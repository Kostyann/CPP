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
#include "../include/Intern.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

int		main()
{
	Intern random;
	Form *form;
	Form *form1;

	form = random.makeForm("presidential pardon", "Thanos, the Destroyer");
	form1 = random.makeForm("liquid shop", "Kostyan");

	return (0);
}
