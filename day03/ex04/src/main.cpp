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
#include "../include/NinjaTrap.hpp"
#include "../include/SuperTrap.hpp"

int		main()
{
	FragTrap trap2 = FragTrap("Frank");
	FragTrap trap1 = FragTrap(trap2);
	FragTrap trap = trap1;
	ScavTrap strap = ScavTrap("Willie");
	ClapTrap ctrap = ClapTrap();
	NinjaTrap ntrap = NinjaTrap();
	SuperTrap superTrap = SuperTrap("JACKIE CHAN");


	std::cout << "--------------------------------------" << std::endl;

	// FragTrap

	trap.rangedAttack("random");
	trap.meleeAttack("bear");
	trap.takeDamage(106);
	trap.beRepaired(0);
	trap.beRepaired(170);

	std::cout << "--------------------------------------" << std::endl;

	trap.vaulthunter_dot_exe("coder");
	trap.vaulthunter_dot_exe("coder");
	trap.vaulthunter_dot_exe("coder");
	trap.vaulthunter_dot_exe("coder");
	trap.vaulthunter_dot_exe("coder");

	std::cout << "--------------------------------------" << std::endl;

	// ScavTrap

	strap.rangedAttack("random");
	strap.meleeAttack("bear");
	strap.takeDamage(106);
	strap.beRepaired(0);
	strap.beRepaired(170);

	std::cout << "--------------------------------------" << std::endl;

	strap.challengeNewcomer("knight");
	strap.challengeNewcomer("knight");
	strap.challengeNewcomer("knight");
	strap.challengeNewcomer("knight");

	std::cout << "--------------------------------------" << std::endl;

	// ClapTrap

	ctrap.rangedAttack("random");
	ctrap.meleeAttack("bear");
	ctrap.takeDamage(106);
	ctrap.beRepaired(0);
	ctrap.beRepaired(170);

	std::cout << "--------------------------------------" << std::endl;

	// NinjaTrap

	ntrap.ninjaShoebox(trap);
	ntrap.ninjaShoebox(ctrap);
	ntrap.ninjaShoebox(strap);
	ntrap.ninjaShoebox(ntrap);

	std::cout << "--------------------------------------" << std::endl;

	// SuperTrap

	superTrap.rangedAttack("random");
	superTrap.meleeAttack("bear");
	superTrap.takeDamage(30);
	superTrap.beRepaired(20);

	std::cout << "--------------------------------------" << std::endl;

	superTrap.vaulthunter_dot_exe("Kostyan");
	superTrap.vaulthunter_dot_exe("Kostyan");
	superTrap.vaulthunter_dot_exe("Kostyan");
	superTrap.ninjaShoebox(ctrap);
	superTrap.ninjaShoebox(ctrap);

	std::cout << "--------------------------------------" << std::endl;

	return (0);
}
