/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:41:11 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 14:41:13 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Enemy.hpp"

Enemy::Enemy()
{
	return;
}

Enemy::Enemy(int hp, std::string const & type):
		hp_(hp), type_(type)
{
	return ;
}

Enemy::Enemy(Enemy const &src)
{
	*this = src;
	return ;
}

Enemy & 	Enemy::operator=(Enemy const &rhs)
{
	if(this != &rhs)
	{
		this->type_ = rhs.type_;
		this->hp_ = rhs.hp_;
	}
	return *this;
}

Enemy::~Enemy()
{
	return;
}

std::string	const	&Enemy::getType() const
{
	return this->type_;
}

int					Enemy::getHP() const
{
	return this->hp_;
}

void				Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return;
	this->hp_ -= damage;
}
