/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:51:48 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/09 15:51:50 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern(void){}

Intern::Intern(Intern const &src){*this = src;}

Intern &	Intern::operator=(Intern const &rhs){return *this;}

Intern::~Intern(){return;}

Form	*Intern::doShruberryForm(std::string target)
{
	ShrubberyCreationForm *form = new ShrubberyCreationForm(target);
	return form;
}

Form	*Intern::doRobotomyForm(std::string target)
{
	RobotomyRequestForm *form = new RobotomyRequestForm(target);
	return form;
}

Form	*Intern::doPardonForm(std::string target)
{
	PresidentialPardonForm *form = new PresidentialPardonForm(target);
	return form;
}

Form	*Intern::makeForm(std::string req_form, std::string target)
{
	typedef  Form* (Intern::*Forms)(std::string target);

	Form *form = 0;
	Forms a[] =
			{&Intern::doShruberryForm, &Intern::doRobotomyForm, &Intern::doPardonForm};
	std::string str[] =
			{ "shruberry creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (req_form.compare(str[i]) == 0)
		{
			form = ((*this).*(a[i])) (target);
			std::cout << "Intern creates a " << *form << std::endl;
			return (form);
		}
	}
	throw FormUnknownException();
}

const char* Intern::FormUnknownException::what() const throw()
{
	return "Requested form is unknown";
}
