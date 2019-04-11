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
		AForm("PresidentialPardonForm", 25, 5), target_(target){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src){*this = src;}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const &)
{
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){return;}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);

	std::cout << target_ << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

