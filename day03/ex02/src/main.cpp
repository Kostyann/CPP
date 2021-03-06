/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 09:57:35 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/04 09:57:37 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"
#include "../include/ScavTrap.hpp"

int		main()
{
	FragTrap trap2 = FragTrap("Frank");
	FragTrap trap1 = FragTrap(trap2);
	FragTrap trap = trap1;
	ScavTrap strap = ScavTrap("Willie");
	ClapTrap ctrap = ClapTrap();

	trap.rangedAttack("random");
	trap.meleeAttack("bear");
	trap.takeDamage(106);
	trap.beRepaired(0);
	trap.beRepaired(170);

	std::cout << "--------------------------------------" << std::endl;

	strap.rangedAttack("random");
	strap.meleeAttack("bear");
	strap.takeDamage(106);
	strap.beRepaired(0);
	strap.beRepaired(170);

	std::cout << "--------------------------------------" << std::endl;

	ctrap.rangedAttack("random");
	ctrap.meleeAttack("bear");
	ctrap.takeDamage(106);
	ctrap.beRepaired(0);
	ctrap.beRepaired(170);

	std::cout << "--------------------------------------" << std::endl;

	trap.vaulthunter_dot_exe("coder");
	trap.vaulthunter_dot_exe("coder");
	trap.vaulthunter_dot_exe("coder");
	trap.vaulthunter_dot_exe("coder");
	trap.vaulthunter_dot_exe("coder");

	std::cout << "--------------------------------------" << std::endl;

	strap.challengeNewcomer("knight");
	strap.challengeNewcomer("knight");
	strap.challengeNewcomer("knight");
	strap.challengeNewcomer("knight");


	return (0);
}
