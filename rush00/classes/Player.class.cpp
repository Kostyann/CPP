/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:30:22 by abulakh           #+#    #+#             */
/*   Updated: 2019/04/06 13:30:23 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.class.hpp"

Player::Player(std::string name) : Entity(25, 1, 5, 50, name, "player")
{
	this->model = ">";
	buls = new Bullet[this->_bullet];
	return;
}
Player::Player(Player const & src) : Entity(src._x, src._y, src._hit_p, src._bullet, src._name, src._type)
{
	*this = src;
}
Player::~Player(void)
{
	delete [] this->buls;
}

Player &	Player::operator=(Player const & rhs)
{
	if (this != &rhs)
		Entity::operator=(rhs);
	return *this;
}
