/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:23:35 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/04 14:23:38 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(void): name_("noname"), hp_(100), max_hp_(100),
energy_(50), max_energy_(50), level_(1), melee_damage_(20), range_damage_(15), armor_(3)
{
	std::cout << "Sc4V-TP initialized, says: alive? again? Nooooo!"
			  << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name): name_(name), hp_(100), max_hp_(100),
energy_(50), max_energy_(50), level_(1), melee_damage_(20),
range_damage_(15), armor_(3)
{
	std::cout << "Sc4V-TP initialized, says: alive? again? Nooooo!"
			  << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	return ;
}

ScavTrap & 	ScavTrap::operator=(ScavTrap const &rhs)
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

ScavTrap::~ScavTrap()
{
	std::cout << "Sc4V-TP is being destroyed, says: Finally!!" << std::endl;
	return;
}

void	ScavTrap::rangedAttack(const std::string &target)
{
	std::cout << "Sc4V-TP " << this->name_ << " attacks " << target <<
	" from distance, happy to deal " << this->range_damage_ <<
	" damage !" << std::endl;
}

void	ScavTrap::meleeAttack(const std::string &target)
{
	std::cout << "Sc4V-TP " << this->name_ << " hits " << target <<
	" with all his weight, less than a kilo, so " << this->melee_damage_
	<< " points of damage is a miracle" << std::endl;
}

void	ScavTrap::gasAttack(const std::string &target)
{
	std::cout << "Sc4V-TP " << this->name_ << " tried to impress "
	<< target << " with his perfumes" << std::endl;
}

void	ScavTrap::shockAttack(const std::string &target)
{
	std::cout << "Sc4V-TP " << this->name_ << " is striking "
	<< target << " with his lightning eyes, impressive)" << std::endl;
}

void	ScavTrap::boreAttack(const std::string &target)
{
	std::cout << "Sc4V-TP " << this->name_ << " is complaining about life and "
	<< target << " starts to be pessimistic" << std::endl;
}

void	ScavTrap::mindChallenge(const std::string &target)
{
	std::cout << target << " you came to the gate keeper Sc4V-TP, named "
	<< this->name_ << ". I challenge you to solve a riddle: **Your imagination here**"
	<< std::endl;
}

void	ScavTrap::bodyChallenge(const std::string &target)
{
	std::cout << "Hey, " << target << " could you jump on your hands? - said Sc4V-TP"
	" with stupid name " << this->name_ << std::endl;
}

void	ScavTrap::saneChallenge(const std::string &target)
{
	std::cout << "Sc4V-TP (" << this->name_ << ") says: \"" << target <<
	" tell me please what do you think about Universal Basic Income?\"" << std::endl;
}

void	ScavTrap::alcoChallenge(const std::string &target)
{
	std::cout << "Sc4V-TP (" << this->name_ << ") yells: \"" << target <<
	", you SHALL NOT PASS! Until you drink some tequila with me\"" << std::endl;
}

void	ScavTrap::googChallenge(const std::string &target)
{
	std::cout << "Sc4V-TP " << this->name_ << " auto-destroys himself and now your, "
	<< target << ", job is to fix him, because why not?" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount > this->armor_)
	{
		amount = amount - this->armor_;
		this->hp_ = (amount > this->hp_) ? 0 : this->hp_ - amount;
		std::cout << this->name_ << " is damaged for " << amount <<
		" points. He wants some more, bitch! - " << this->hp_ << std::endl;
	}
	else
		std::cout << this->name_ << " is not even scratched, you idiot#$"
		<< std::endl;

}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (amount == 0)
	{
		std::cout << "That's not considered a repair, thanks" << std::endl;
		return;
	}
	this->hp_ = this->hp_ + amount;
	this->hp_ = (this->hp_ > 100) ? 100 : this->hp_;
	std::cout << this->name_ << " is repaired and now has "
			  << this->hp_ << " reasons to die" << std::endl;
}

void	ScavTrap::challengeNewcomer(const std::string &target)
{
	typedef  void (ScavTrap::*ChallengeFn)(const std::string &target);

	ChallengeFn a [] = { &ScavTrap::mindChallenge, &ScavTrap::bodyChallenge,
	&ScavTrap::saneChallenge, &ScavTrap::alcoChallenge, &ScavTrap::googChallenge};

	if (this->energy_ < 25)
		std::cout << "No energy to perform the action" << std::endl;
	else
	{
		srand(time(0) + rand());
		((*this).*(a[rand() % 5])) (target);
		this->energy_ -= 25;
	}
}
