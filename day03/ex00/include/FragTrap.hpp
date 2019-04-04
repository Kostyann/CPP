/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 09:57:07 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/04 09:57:09 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include <iostream>
#include <string>

class FragTrap {

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	FragTrap &	operator=(FragTrap const & rhs);
	~FragTrap(void);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	gasAttack(std::string const & target);
	void	shockAttack(std::string const & target);
	void	boreAttack(std::string const & target);

	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	vaulthunter_dot_exe(std::string const & target);

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
