/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 19:05:15 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/04 19:05:19 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/SuperTrap.hpp"

SuperTrap::SuperTrap(void):FragTrap(), NinjaTrap()
{
	ClapTrap::hp_ = 100;
	ClapTrap::max_hp_ = 100;
	ClapTrap::energy_ = 120;
	ClapTrap::max_energy_ = 120;
	ClapTrap::level_ = 1;
	ClapTrap::melee_damage_ = 60;
	ClapTrap::range_damage_ = 20;
	ClapTrap::armor_ = 5;
	std::cout << "SUP{R-TP initialized, DESTROY!"
			  << std::endl;
	return;
}

SuperTrap::SuperTrap(std::string name):FragTrap(name), NinjaTrap(name)
{
	ClapTrap::hp_ = 100;
	ClapTrap::max_hp_ = 100;
	ClapTrap::energy_ = 120;
	ClapTrap::max_energy_ = 120;
	ClapTrap::level_ = 1;
	ClapTrap::melee_damage_ = 60;
	ClapTrap::range_damage_ = 20;
	ClapTrap::armor_ = 5;
	std::cout << "SUP{R-TP initialized, DESTROY!"
			  << std::endl;
	return;
}

SuperTrap::SuperTrap(SuperTrap const &src)
{
	*this = src;
	return ;
}

SuperTrap & 	SuperTrap::operator=(SuperTrap const &rhs)
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

SuperTrap::~SuperTrap()
{
	std::cout << "SUP{R-TP was defeated" << std::endl;
	return;
}

void	SuperTrap::rangedAttack(const std::string &target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(const std::string &target)
{
	NinjaTrap::meleeAttack(target);
}
