/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:30:25 by abulakh           #+#    #+#             */
/*   Updated: 2019/04/06 13:30:28 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bullet.class.hpp"

Bullet::Bullet(unsigned int posx,unsigned int posy) : Entity(posx, posy, 1, 0, "bullet", "bullet")
{
	this->model = "-";
	return;
}
Bullet::Bullet(Bullet const & src) : Entity(src._x, src._y, src._hit_p, src._bullet, src._name, src._type)
{
	*this = src;
}
Bullet::Bullet(void)
{
	this->_name = "bul";
	this->_x = 1;
	this->_y = 1;
	this->_hit_p = 1;
	this->_bullet = 0;
	this->_type = "bul";
	this->model = "-";
}

Bullet::~Bullet(void)
{

}

Bullet &	Bullet::operator=(Bullet const & rhs)
{
	if (this != &rhs)
		Entity::operator=(rhs);
	return *this;
}

