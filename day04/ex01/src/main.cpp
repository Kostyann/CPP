/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:40:16 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 14:40:18 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"
#include "../include/PlasmaRifle.hpp"
#include "../include/PowerFist.hpp"
#include "../include/RadScorpion.hpp"
#include "../include/SuperMutant.hpp"

int	main()
{
	Character* zaz = new Character("zaz");

	std::cout << *zaz;

	Enemy* b = new RadScorpion();
	Enemy* a = new SuperMutant();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);

	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;

	std::cout << "--------------------------" << std::endl;

	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;

	zaz->attack(a);
	std::cout << *zaz;
	zaz->attack(a);
	std::cout << *zaz;
	zaz->attack(a);
	std::cout << *zaz;
	zaz->attack(a);
	std::cout << *zaz;
	zaz->attack(a);
	std::cout << *zaz;
	zaz->recoverAP();
	zaz->recoverAP();
	zaz->recoverAP();
	zaz->recoverAP();
	std::cout << *zaz;

	zaz->equip(pf);
	zaz->attack(a);
	std::cout << *zaz;
	zaz->attack(a);
	std::cout << *zaz;
	zaz->attack(a);
	std::cout << *zaz;
	zaz->attack(a);
	std::cout << *zaz;


	return (0);
}
