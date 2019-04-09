/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:11:35 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 19:11:37 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Squad.hpp"

Squad::Squad(): count_(0)
{
	return;
}

Squad::Squad(Squad const &src): count_(0), head(0), tail(0)
{
	*this = src;
	return ;
}

Squad & 	Squad::operator=(Squad const &rhs)
{
	s_squad *tmp;
	if(this != &rhs)
	{
		while (this->head)
		{
			tmp = this->head;
			this->head = this->head->next;
			tmp->marine->~ISpaceMarine();
			this->count_--;
		}
		for (int i = 0; i < rhs.getCount(); i++)
			this->push(rhs.getUnit(i)->clone());
	}
	return *this;
}

Squad::~Squad()
{
	while (this->head)
	{
		this->head->marine->~ISpaceMarine();
		this->head = this->head->next;
	}
	return;
}

int				Squad::getCount() const
{
	return this->count_;
}

ISpaceMarine	*Squad::getUnit(int N) const
{
	s_squad *tmp;
	if (N < 0 || N + 1 > this->count_)
		return (0);
	tmp = this->head;
	for (int i = 0; i < N; i++)
		tmp = tmp->next;
	return tmp->marine;
}

int				Squad::push(ISpaceMarine *marine)
{
	s_squad *tmp;
	if (!marine)
		return this->count_;
	if (this->count_ == 0)
	{
		this->head = new s_squad;
		this->head->marine = marine;
		this->head->next = 0;
		this->tail = this->head;
		this->count_++;
		return this->count_;
	}
	tmp = this->head;
	while (tmp)
	{
		if (tmp->marine == marine)
			return this->count_;
		tmp = tmp->next;
	}
	this->tail->next = new s_squad;
	this->tail = this->tail->next;
	this->tail->marine = marine;
	this->tail->next = 0;
	this->count_++;

	return this->count_;
}
