/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 12:08:39 by abulakh           #+#    #+#             */
/*   Updated: 2019/04/06 12:08:42 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Entity.class.hpp"

Entity::Entity(unsigned int posx, unsigned int posy, unsigned int hit_p, unsigned int bullet, std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
	this->_hit_p = hit_p;
	this->_x = posx;
	this->_y = posy;
	this->_bullet = bullet;
	return;
}

Entity::Entity(Entity const & src)
{
	*this = src;
	return;
}
Entity::Entity(void)
{
}

Entity::~Entity(void)
{
}

Entity & Entity::operator=(Entity const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_type = rhs._type;
		this->_hit_p = rhs._hit_p;
		this->_x = rhs._x;
		this->_y = rhs._y;
		this->_bullet =rhs._bullet;
	}
	return *this;
}

std::string Entity::getName(void)
{
	return this->_name;
}

std::string Entity::getType(void)
{
	return this->_type;
}
unsigned int Entity::getX(void)
{
	return this->_x;
}
unsigned int Entity::getY(void)
{
	return this->_y;
}
unsigned int Entity::getHP(void)
{
	return this->_hit_p;
}
void Entity::moveX(unsigned int value)
{
	if (value == 0 || value == MAX_POSX - 1)
		return;
	this->_x = value;
}
void Entity::moveY(unsigned int value)
{
	if (value == 0 || value == MAX_POSY - 1)
		return;
	this->_y = value;
}
unsigned int Entity::getBullet(void)
{
	return this->_bullet;
}

void Entity::takeDamage(unsigned int value)
{
	if (this->_hit_p < value)
		this->_hit_p = 0;
	else
		this->_hit_p -= value;
}

