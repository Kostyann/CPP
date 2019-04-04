/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:23:18 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/04 14:23:23 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include <iostream>
#include <string>

class ScavTrap {

public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	ScavTrap &	operator=(ScavTrap const & rhs);
	~ScavTrap(void);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	gasAttack(std::string const & target);
	void	shockAttack(std::string const & target);
	void	boreAttack(std::string const & target);

	void	mindChallenge(std::string const & target);
	void	bodyChallenge(std::string const & target);
	void	saneChallenge(std::string const & target);
	void	alcoChallenge(std::string const & target);
	void	googChallenge(std::string const & target);

	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	challengeNewcomer(std::string const & target);

private:

	std::string		name_;
	unsigned int	hp_;
	unsigned int	max_hp_;
	unsigned int	energy_;
	unsigned int	max_energy_;
	unsigned int	level_;
	unsigned int	melee_damage_;
	unsigned int	range_damage_;
	unsigned int	armor_;
};

#endif
