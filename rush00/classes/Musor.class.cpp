/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Musor.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:44:43 by abulakh           #+#    #+#             */
/*   Updated: 2019/04/06 13:44:45 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Musor.class.hpp"

Musor::Musor(unsigned int posx) : Entity(posx, MAX_POSY - 1, 1, 0, "Musor", "Musor")
{
	this->model = "*";
	return;
}

Musor::Musor(void)
{
	this->_name = "mm";
	this->_x = 1 + rand() % 48;
	this->_y = 100 + rand() % 98;
	this->_hit_p = 1;
	this->_bullet = 0;
	this->_type = "musor";
	this->model = "*";
}
Musor::Musor(Musor const & src) : Entity(src._x, src._y, src._hit_p, src._bullet, src._name, src._type)
{
	*this = src;
}

Musor::~Musor(void)
{

}

Musor &	Musor::operator=(Musor const & rhs)
{
	if (this != &rhs)
		Entity::operator=(rhs);
	return *this;
}


