/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:41:28 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 14:41:30 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return;
}

SuperMutant::SuperMutant(SuperMutant const &src)
{
	*this = src;
	return ;
}

SuperMutant & 	SuperMutant::operator=(SuperMutant const &rhs)
{
	if(this != &rhs)
	{
		Enemy::operator=(rhs);
	}
	return *this;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
	return;
}

void		SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}

