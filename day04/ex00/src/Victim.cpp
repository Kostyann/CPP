/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:23:49 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 12:23:51 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Victim.hpp"

Victim::Victim()
{
	return ;
}

Victim::Victim(std::string name): name_(name)
{
	std::cout << "Some random victim called " << name_ << " just popped !"
	<< std::endl;
	return ;
}

Victim::Victim(Victim const &src)
{
	*this = src;
	return ;
}

Victim & 	Victim::operator=(Victim const &rhs)
{
	if(this != &rhs)
	{
		this->name_ = rhs.name_;
	}
	return *this;
}

Victim::~Victim()
{
	std::cout << "Victim " << name_ << " just died for no apparent reason !"
	<< std::endl;
	return;
}

std::string	Victim::getName() const
{
	return this->name_;
}

void		Victim::getPolymorphed() const
{
	std::cout << this->name_ << " has been turned into a cute little sheep !"
	<< std::endl;
}

std::ostream &		operator<<(std::ostream & o, Victim const & i)
{
	o << "I am " << i.getName() << " and I like otters !" << std::endl;

	return (o);
}
