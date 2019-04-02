/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:56:55 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 15:56:57 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Human.hpp"

Human::Human()
{
//	std::cout << "Human is born" << std::endl;
	return;
}

Human::~Human()
{
//	std::cout << "Human killed" << std::endl;
	return;
}

void		Human::setName(std::string name)
{
	this->name_ = name;
}

std::string	Human::getName() const
{
	return this->name_;
}

Brain		&Human::getBrain()
{
	return this->myBrain_;
}

std::string	Human::identify() const
{
	return this->myBrain_.identify();
}
