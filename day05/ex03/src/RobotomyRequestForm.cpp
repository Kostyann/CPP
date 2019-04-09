/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 11:25:03 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/09 11:25:05 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
		Form("RobotomyRequestForm", 72, 45, target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src){*this = src;}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	Form::operator=(rhs);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){return;}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	srand(time(0) + rand());

	std::cout << "* Drrrrr...bdam!...tatatatata...drrrr.. *" << std::endl;
	if (rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Failed to robotomize " << getTarget() << std::endl;
}

