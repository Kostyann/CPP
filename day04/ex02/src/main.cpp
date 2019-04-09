/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:11:20 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 19:11:21 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Squad.hpp"
#include "../include/TacticalMarine.hpp"
#include "../include/AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i );
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << "---------------------------" << std::endl;

	ISpaceMarine* kik = new TacticalMarine;
	ISpaceMarine* yoyo = kik->clone();
	Squad* mine = new Squad;
	mine->push(kik);
	mine->push(yoyo);
	mine->push(jim);
	mine->push(jim);

	Squad* tada = new Squad(*mine);
	tada->push(bob);
	std::cout << "+++++++++++++++++++++++++++" << std::endl;
	*tada = *mine;
	std::cout << "+++++++++++++++++++++++++++" << std::endl;
	for (int i = 0; i < tada->getCount(); ++i)
	{
		ISpaceMarine* cur = tada->getUnit(i );
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}


	std::cout << "---------------------------" << std::endl;

	delete mine;


	delete vlc;


	return (0);
}
