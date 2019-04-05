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

FragTrap::FragTrap(void):ClapTrap()
{
	ClapTrap::hp_ = 100;
	ClapTrap::max_hp_ = 100;
	ClapTrap::energy_ = 100;
	ClapTrap::max_energy_ = 100;
	ClapTrap::level_ = 1;
	ClapTrap::melee_damage_ = 30;
	ClapTrap::range_damage_ = 20;
	ClapTrap::armor_ = 5;
	std::cout << "FR4G-TP initialized, ready to eke out a miserable existence"
			  << std::endl;
	return;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	ClapTrap::hp_ = 100;
	ClapTrap::max_hp_ = 100;
	ClapTrap::energy_ = 100;
	ClapTrap::max_hp_ = 100;
	ClapTrap::level_ = 1;
	ClapTrap::melee_damage_ = 30;
	ClapTrap::range_damage_ = 20;
	ClapTrap::armor_ = 5;
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
			  " from far far away, dealing " << this->range_damage_ <<
			  " points of trouble !" << std::endl;
}

void	FragTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->name_ << " hits " << target <<
			  " right in the face, and does " << this->melee_damage_
			  << " points of damage !" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	typedef  void (ClapTrap::*AttackFn)(const std::string &target);

	AttackFn a [] = { &ClapTrap::rangedAttack, &ClapTrap::meleeAttack,
	&ClapTrap::gasAttack, &ClapTrap::shockAttack, &ClapTrap::boreAttack,};

	if (this->energy_ < 25)
		std::cout << "No energy to perform the action" << std::endl;
	else
	{
		srand(time(0) + rand());
		((*this).*(a[rand() % 5])) (target);
		this->energy_ -= 25;
	}
}
