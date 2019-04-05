/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:23:38 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 12:23:40 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Peon.hpp"

Peon::Peon()
{
	return ;
}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(Peon const &src)
{
	*this = src;
	return ;
}

Peon & 	Peon::operator=(Peon const &rhs)
{
	if(this != &rhs)
	{
		this->name_ = rhs.name_;
	}
	return *this;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
	return;
}

void		Peon::getPolymorphed() const
{
	std::cout << this->name_ << " has been turned into a pink pony !"
			  << std::endl;
}

