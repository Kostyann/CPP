/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 18:10:12 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/04 18:10:15 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void):ClapTrap()
{
	this->hp_ = 60;
	this->max_hp_ = 60;
	this->energy_ = 120;
	this->max_energy_ = 120;
	this->level_ = 1;
	this->melee_damage_ = 60;
	this->range_damage_ = 5;
	this->armor_ = 0;
	std::cout << "N9nja-TP initialized, piu, piu!"
			  << std::endl;
	return;
}

NinjaTrap::NinjaTrap(std::string name):ClapTrap(name)
{
	this->name_ = name;
	this->hp_ = 60;
	this->max_hp_ = 60;
	this->energy_ = 120;
	this->max_energy_ = 120;
	this->level_ = 1;
	this->melee_damage_ = 60;
	this->range_damage_ = 5;
	this->armor_ = 0;
	std::cout << "N9nja-TP (" << this->name_ << ") initialized, piu, piu!"
			  << std::endl;
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	*this = src;
	return ;
}

NinjaTrap & 	NinjaTrap::operator=(NinjaTrap const &rhs)
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

NinjaTrap::~NinjaTrap()
{
	std::cout << "N9nja-TP is killed" << std::endl;
	return;
}

void	NinjaTrap::rangedAttack(const std::string &target)
{
	std::cout << "N9nja-TP " << this->name_ << " attacks " << target <<
	" from distance, as a coward,  causing " << this->range_damage_ <<
	" points of trouble !" << std::endl;
}

void	NinjaTrap::meleeAttack(const std::string &target)
{
	std::cout << "N9nja-TP " << this->name_ << " hits " << target <<
	" with his bare hands, forcing him to accept " << this->melee_damage_
	<< " points of damage !" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap const &)
{
	std::cout << "Ninja (" << this->name_ << ") says hello to unknown CL^P-TP"
	<< std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap const &)
{
	std::cout << "Ninja (" << this->name_ << ") says hello to unknown FR4G-TP"
			  << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const &)
{
	std::cout << "Ninja (" << this->name_ << ") says hello to unknown N9nja-TP"
			  << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const &)
{
	std::cout << "Ninja (" << this->name_ << ") says hello to unknown Sc4V-TP"
			  << std::endl;
}
