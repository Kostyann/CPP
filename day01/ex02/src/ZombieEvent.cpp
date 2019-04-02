/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 11:37:35 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 11:37:39 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->type = "default";
	return;
}

ZombieEvent::~ZombieEvent()
{
	return;
}

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie* z = new Zombie(name, this->type);
	return z;
}
