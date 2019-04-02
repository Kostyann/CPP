/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 09:38:34 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 09:38:37 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, int magic_pow) : name_(name), magic_pow_(magic_pow)
{
	std::cout << "Pony " << this->name_ << " is born" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Pony " << this->name_ << " has died" << std::endl;
}

std::string	Pony::getName()
{
	return this->name_;
}

int			Pony::getPow()
{
	return this->magic_pow_;
}
