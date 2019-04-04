/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:34:16 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/04 15:34:18 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>
#include <string>

class ClapTrap {

public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	ClapTrap &	operator=(ClapTrap const & rhs);
	~ClapTrap(void);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	gasAttack(std::string const & target);
	void	shockAttack(std::string const & target);
	void	boreAttack(std::string const & target);

	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

protected:

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
