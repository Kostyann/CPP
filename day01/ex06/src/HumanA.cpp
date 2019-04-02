/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:50:18 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 18:50:20 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name_(name), weapon_(weapon)
{
	return;
}

HumanA::~HumanA()
{
	return;
}

void		HumanA::setName(std::string name)
{
	this->name_ = name;
}

std::string	HumanA::getName() const
{
	return this->name_;
}

void		HumanA::attack()
{
	std::cout << this->name_ << " attacks with his " << this->weapon_.getType()
	<< std::endl;
}
