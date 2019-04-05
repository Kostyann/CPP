/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:42:06 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 14:42:08 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character()
{
	return;
}

Character::Character(std::string const & name): name_(name), ap_(40), weapon_(0)
{
	return ;
}

Character::Character(Character const &src)
{
	*this = src;
	return ;
}

Character & 	Character::operator=(Character const &rhs)
{
	if(this != &rhs)
	{
		this->name_ = rhs.name_;
		this->ap_ = rhs.ap_;
		this->weapon_ = rhs.weapon_;
	}
	return *this;
}

Character::~Character()
{
	return;
}

void		Character::recoverAP()
{
	this->ap_ = (this->ap_ > 30) ? 40 : this->ap_ + 10;
}

void		Character::equip(AWeapon *weapon)
{
	this->weapon_ = weapon;
}

void		Character::attack(Enemy *enemy)
{
	if (!this->weapon_)
		return;
	int diff = this->ap_ - this->weapon_->getAPCost();
	if (diff < 0)
		return;
	std::cout << this->name_ << " attacks " << enemy->getType() << " with a "
	<< this->weapon_->getName() << std::endl;
	this->weapon_->attack();
	enemy->takeDamage(this->weapon_->getDamage());
	if (enemy->getHP() <= 0)
		enemy->~Enemy();

	this->ap_ = diff;
}

std::string	const	&Character::getName() const
{
	return this->name_;
}

int					Character::getAP() const
{
	return this->ap_;
}

AWeapon				*Character::getWeapon() const
{
	return this->weapon_;
}

std::ostream &		operator<<(std::ostream & o, Character const & i)
{
	if (!i.getWeapon())
		o << i.getName() << " has " << i.getAP() << " AP and is unarmed";
	else
		o << i.getName() << " has " << i.getAP() << " AP and wields a "
		<< i.getWeapon()->getName();
	o << std::endl;

	return (o);
}
