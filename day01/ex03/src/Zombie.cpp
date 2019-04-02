/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 11:09:14 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 11:09:17 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie()
{
	return;
}

Zombie::~Zombie()
{
	return;
}

void		Zombie::setName(std::string name)
{
	this->name_ = name;
}

void		Zombie::setType(std::string type)
{
	this->type_ = type;
}

std::string	Zombie::getName()
{
	return this->name_;
}

std::string	Zombie::getType()
{
	return this->type_;
}

void		Zombie::announce()
{
	std::cout << this->name_ << " (" << this->type_
	<< ") says: Hungryy..gh.gh" << std::endl;
}
