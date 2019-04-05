/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:34:30 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/04 15:34:35 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(void): level_(1)
{
	std::cout << "CL^P-TP initialized, M@TH=F*CK(R$"
			  << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name): name_(name),  level_(1)
{
	std::cout << "CL^P-TP (" << this->name_ << ") initialized, M@TH=F*CK(R$"
			  << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	return ;
}

ClapTrap & 	ClapTrap::operator=(ClapTrap const &rhs)
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

ClapTrap::~ClapTrap()
{
	std::cout << "CL^P-TP is turned off permanently." << std::endl;
	return;
}

void	ClapTrap::rangedAttack(const std::string &target)
{
	std::cout << "CL^P-TP " << this->name_ <<
	" can't attack from distance, even if " << target <<
	" is the target" << std::endl;
}

void	ClapTrap::meleeAttack(const std::string &target)
{
	std::cout << "CL^P-TP " << this->name_ <<
	" can't attack up close either, even though he hates " << target <<
	" with all of his existence" << std::endl;
}

void	ClapTrap::gasAttack(const std::string &target)
{
	std::cout << "CL^P-TP " << this->name_ << " spoils the air in presence of "
			  << target << ", making him sick !" << std::endl;
}

void	ClapTrap::shockAttack(const std::string &target)
{
	std::cout << "CL^P-TP " << this->name_ << " tests "
			  << target << "'s electrical conductivity. "
						   "It isn't going well for the former" << std::endl;
}

void	ClapTrap::boreAttack(const std::string &target)
{
	std::cout << "CL^P-TP " << this->name_ << " recites his own poems and "
			  << target << " is begging to stop this madness!!!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
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

void	ClapTrap::beRepaired(unsigned int amount)
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
