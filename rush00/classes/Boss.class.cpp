/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Boss.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 13:45:17 by abulakh           #+#    #+#             */
/*   Updated: 2019/04/07 13:45:18 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Boss.class.hpp"

Boss::Boss(std::string name, unsigned int posx) : Entity(posx, MAX_POSY - 1, 100, 30, name, "boss")
{
	this->model = "><";
	this->_bullet = 30;
	buls = new Bullet[this->_bullet];
	this->collis[0].x = 23;
	this->collis[0].y = MAX_POSY - 2;
	this->collis[1].x = 24;
	this->collis[1].y = MAX_POSY - 2;
	this->collis[2].x = 25;
	this->collis[2].y = MAX_POSY - 2;
	this->collis[3].x = 22;
	this->collis[3].y = MAX_POSY - 3;
	this->collis[4].x = 23;
	this->collis[4].y = MAX_POSY - 3;
	this->collis[5].x = 24;
	this->collis[5].y = MAX_POSY - 3;
	this->collis[6].x = 25;
	this->collis[6].y = MAX_POSY - 3;
	this->collis[7].x = 26;
	this->collis[7].y = MAX_POSY - 3;
	this->collis[8].x = 23;
	this->collis[8].y = MAX_POSY - 4;
	this->collis[9].x = 24;
	this->collis[9].y = MAX_POSY - 4;
	this->collis[10].x = 25;
	this->collis[10].y = MAX_POSY - 4;
	this->collis[11].x = 23;
	this->collis[11].y = MAX_POSY - 5;
	this->collis[12].x = 24;
	this->collis[12].y = MAX_POSY - 5;
	this->collis[13].x = 25;
	this->collis[13].y = MAX_POSY - 5;
	this->collis[14].x = 24;
	this->collis[14].y = MAX_POSY - 6;
	this->collis[15].x = 24;
	this->collis[15].y = MAX_POSY - 7;
	return;
}
Boss::Boss(Boss const & src) : Entity(src._x, src._y, src._hit_p, src._bullet, src._name, src._type)
{
	*this = src;
}
Boss::~Boss(void)
{
	delete [] this->buls;
}

void Boss::moveUp(void)
{
	for(size_t i = 0; i < NUM_COLLS; i++)
	{
		if (this->collis[i].x - 1 == 0)
			return;
	}
	for(size_t i = 0; i < NUM_COLLS; i++)
	{
		this->collis[i].x -= 1;
	}
}

void Boss::moveRight(void)
{
	for(size_t i = 0; i < NUM_COLLS; i++)
	{
		if (this->collis[i].y - 1 < 70)
			return;
	}
	for(size_t i = 0; i < NUM_COLLS; i++)
	{
		this->collis[i].y -= 1;
	}
}
void Boss::moveDown(void)
{
	for(size_t i = 0; i < NUM_COLLS; i++)
	{
		if (this->collis[i].x + 1 == MAX_POSX - 1)
			return;
	}
	for(size_t i = 0; i < NUM_COLLS; i++)
	{
		this->collis[i].x += 1;
	}
}

Boss &	Boss::operator=(Boss const & rhs)
{
	if (this != &rhs)
		Entity::operator=(rhs);
	return *this;
}

