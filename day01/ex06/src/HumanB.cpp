/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:50:08 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 18:50:10 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name) : name_(name)
{
	return;
}

HumanB::~HumanB()
{
	return;
}

void		HumanB::setName(std::string name)
{
	this->name_ = name;
}

std::string	HumanB::getName() const
{
	return this->name_;
}

void		HumanB::attack()
{
	std::cout << this->name_ << " attacks with his " << this->weapon_->getType()
			  << std::endl;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->weapon_ = &weapon;
}
