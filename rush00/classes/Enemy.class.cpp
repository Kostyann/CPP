/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:29:18 by abulakh           #+#    #+#             */
/*   Updated: 2019/04/06 13:29:19 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.class.hpp"

Enemy::Enemy(std::string name, unsigned int posx) : Entity(posx, MAX_POSY - 1, 1, 5, name, "enemy")
{
	this->model = "<";
	return;
}
Enemy::Enemy(Enemy const & src) : Entity(src._x, src._y, src._hit_p, src._bullet, src._name, src._type)
{
	*this = src;
}
Enemy::Enemy(void) : Entity()
{
	this->_name = "en";
	this->_x = 1 + rand() % 48;
	this->_y = 100 + rand() % 98;
	this->_hit_p = 1;
	this->_bullet = 5;
	buls = new Bullet[this->_bullet];
	this->_type = "enemy";
	this->model = "<";
}
Enemy::~Enemy(void)
{
	delete [] this->buls;
}

Enemy &	Enemy::operator=(Enemy const & rhs)
{
	if (this != &rhs)
		Entity::operator=(rhs);
	return *this;
}
