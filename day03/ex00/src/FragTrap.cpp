/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 09:57:24 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/04 09:57:26 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(void): name_("none"), hp_(100), max_hp_(100), energy_(100),
									max_energy_(100), level_(1), melee_damage_(30),
									range_damage_(20), armor_(5)
{
	std::cout << "FR4G-TP initialized, ready to eke out a miserable existence"
	<< std::endl;
	return;
}

FragTrap::FragTrap(std::string name): name_(name), hp_(100), max_hp_(100),
energy_(100), max_energy_(100), level_(1), melee_damage_(30),
range_damage_(20), armor_(5)
{
	std::cout << "FR4G-TP initialized, ready to eke out a miserable existence"
	<< std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	return ;
}

FragTrap & 	FragTrap::operator=(FragTrap const &rhs)
{
	if(this != &rhs)
	{
		this->name_ = rhs.name_;
		this->hp_ = rhs.hp_;
		this->max_hp_ = rhs.max_hp_;
		this->energy_ = rhs.energy_;
		this->max_energy_ = rhs.max_energy_;
		this->level_ = rhs.level_;
		this->melee_damage_ = rhs.melee_damage_;
		this->range_damage_ = rhs.range_damage_;
		this->armor_ = rhs.armor_;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "This instance of FR4G-TP is being destroyed. "
			  "Happily stay, losers!" << std::endl;
	return;
}

void	FragTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->name_ << " attacks " << target <<
	" from distance, as a coward,  causing " << this->range_damage_ <<
	" points of trouble !" << std::endl;
}

void	FragTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->name_ << " hits " << target <<
	" with his bare hands, forcing him to accept " << this->melee_damage_
	<< " points of damage !" << std::endl;
}

void	FragTrap::gasAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->name_ << " spoils the air in presence of "
	<< target << ", making him sick !" << std::endl;
}

void	FragTrap::shockAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->name_ << " tests "
	<< target << "'s electrical conductivity. "
	"It isn't going well for the former" << std::endl;
}

void	FragTrap::boreAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->name_ << " recites his own poems and "
	<< target << " is begging to stop this madness!!!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (amount > this->armor_)
	{
		amount = amount - this->armor_;
		this->hp_ = (amount > this->hp_) ? 0 : this->hp_ - amount;
		std::cout << this->name_ << " takes a whooping " << amount <<
		" points of damage. His pure health is now even worse - "
		<< this->hp_ << std::endl;
	}
	else
		std::cout << this->name_ << " dodges the attack. Haha!" << std::endl;

}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (amount == 0)
	{
		std::cout << "Where your arms are growing from?" << std::endl;
		return;
	}
	this->hp_ = this->hp_ + amount;
	this->hp_ = (this->hp_ > 100) ? 100 : this->hp_;
	std::cout << this->name_ << " is repaired and now has a "
	<< this->hp_ << " hit points of life to spend" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	typedef  void (FragTrap::*AttackFn)(const std::string &target);

	AttackFn a [] = { &FragTrap::rangedAttack, &FragTrap::meleeAttack,
	&FragTrap::gasAttack, &FragTrap::shockAttack, &FragTrap::boreAttack};

	if (this->energy_ < 25)
		std::cout << "No energy to perform the action" << std::endl;
	else
	{
		srand(time(0) + rand());
		((*this).*(a[rand() % 5])) (target);
		this->energy_ -= 25;
	}
}
