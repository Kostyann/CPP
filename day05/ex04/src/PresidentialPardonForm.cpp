/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 11:25:18 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/09 11:25:20 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
		Form("PresidentialPardonForm", 25, 5, target){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src){*this = src;}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	Form::operator=(rhs);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){return;}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

