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

Zombie::Zombie(std::string name, std::string type) : name_(name), type_(type)
{
	return;
}

Zombie::~Zombie()
{
	return;
}

std::string	Zombie::getName()
{
	return this->name_;
}

std::string	Zombie::getType()
{
	return this->name_;
}

void		Zombie::announce()
{
	std::cout << this->name_ << " (" << this->type_
	<< ") says: Hungryy..gh.gh" << std::endl;
}
