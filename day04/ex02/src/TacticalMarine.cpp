/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:11:55 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 19:11:57 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src)
{
	*this = src;
	return ;
}

TacticalMarine & 	TacticalMarine::operator=(TacticalMarine const &)
{
	return *this;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaaargh ..." << std::endl;
	return;
}

ISpaceMarine	*TacticalMarine::clone() const
{
	ISpaceMarine *new_m = new TacticalMarine(*this);
	return new_m;
}

void			TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !" << std::endl;
}

void			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}

