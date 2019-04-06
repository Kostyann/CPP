/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:12:18 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 19:12:20 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
	return;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src)
{
	*this = src;
	return ;
}

AssaultTerminator & 	AssaultTerminator::operator=(AssaultTerminator const &)
{
	return *this;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back ..." << std::endl;
	return;
}

ISpaceMarine	*AssaultTerminator::clone() const
{
	ISpaceMarine *new_m = new AssaultTerminator(*this);
	return new_m;
}

void			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void			AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

