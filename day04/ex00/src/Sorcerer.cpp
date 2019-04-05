/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:24:04 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 12:24:05 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	return;
}

Sorcerer::Sorcerer(std::string name, std::string title): name_(name), title_(title)
{
	std::cout << name_ << ", " << title_ << ", is born !" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;
	return ;
}

Sorcerer & 	Sorcerer::operator=(Sorcerer const &rhs)
{
	if(this != &rhs)
	{
		this->name_ = rhs.name_;
		this->title_ = rhs.title_;
	}
	return *this;
}

Sorcerer::~Sorcerer()
{
	std::cout << name_ << ", " << title_ <<
	", is dead. Consequences will never be the same !" << std::endl;
	return;
}

std::string	Sorcerer::getName() const
{
	return this->name_;
}

std::string	Sorcerer::getTitle() const
{
	return this->title_;
}

void		Sorcerer::polymorph(Victim const & victim)
{
	victim.getPolymorphed();
}

std::ostream &		operator<<(std::ostream & o, Sorcerer const & i)
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies !"
	<< std::endl;

	return (o);
}
