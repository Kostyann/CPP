/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:40:29 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 14:40:31 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AWeapon.hpp"

AWeapon::AWeapon()
{
	return;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
name_(name), apcost_(apcost), damage_(damage)
{
	return ;
}

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;
	return ;
}

AWeapon & 	AWeapon::operator=(AWeapon const &rhs)
{
	if(this != &rhs)
	{
		this->name_ = rhs.name_;
		this->apcost_ = rhs.apcost_;
		this->damage_ = rhs.damage_;
	}
	return *this;
}

AWeapon::~AWeapon()
{
	return;
}

std::string const	&AWeapon::getName() const
{
	return this->name_;
}

int			AWeapon::getAPCost() const
{
	return this->apcost_;
}

int			AWeapon::getDamage() const
{
	return this->damage_;
}
