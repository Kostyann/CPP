/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:40:56 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 14:40:57 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{
	return;
}

PowerFist::PowerFist(PowerFist const &src)
{
	*this = src;
	return ;
}

PowerFist & 	PowerFist::operator=(PowerFist const &rhs)
{
	if(this != &rhs)
	{
		AWeapon::operator=(rhs);
	}
	return *this;
}

PowerFist::~PowerFist()
{
	return;
}

void	PowerFist::attack() const
{
	std::cout << "* pschhhh... SBAM! *" << std::endl;
}

