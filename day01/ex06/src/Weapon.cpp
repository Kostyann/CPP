/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:50:31 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 18:50:33 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon()
{
	return;
}

Weapon::Weapon(std::string type) : type_(type)
{
	return;
}

Weapon::~Weapon()
{
	return;
}

void		Weapon::setType(std::string type)
{
	this->type_ = type;
}

std::string	&Weapon::getType()
{
	return this->type_;
}
