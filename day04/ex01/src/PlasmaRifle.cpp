/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:40:42 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 14:40:43 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src)
{
	*this = src;
	return ;
}

PlasmaRifle & 	PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
	if(this != &rhs)
	{
		AWeapon::operator=(rhs);
	}
	return *this;
}

PlasmaRifle::~PlasmaRifle()
{
	return;
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

