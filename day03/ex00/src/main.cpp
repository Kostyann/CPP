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

int		main()
{
	FragTrap trap2 = FragTrap("Frank");
	FragTrap trap1 = FragTrap(trap2);
	FragTrap trap = trap1;

	trap.rangedAttack("random");
	trap.meleeAttack("bear");
	trap.takeDamage(106);
	trap.beRepaired(0);
	trap.beRepaired(170);

	trap.vaulthunter_dot_exe("coder");
	trap.vaulthunter_dot_exe("coder");
	trap.vaulthunter_dot_exe("coder");
	trap.vaulthunter_dot_exe("coder");
	trap.vaulthunter_dot_exe("coder");

	return (0);
}
