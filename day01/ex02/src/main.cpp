/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 11:19:26 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 11:19:29 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include "../include/ZombieEvent.hpp"
#include <stdlib.h>
#include <time.h>

static const char alpha[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

void	randomChump(int random)
{
	srand(time(0) + random);
	std::string name;
	for (int i = 0; i < 6; ++i)
		name += alpha[rand() % (sizeof(alpha) - 1)];

	ZombieEvent event = ZombieEvent();
	event.setZombieType("fast");

	Zombie*	r = event.newZombie(name);
	r->announce();

	delete r;
}

void	zombieOnStack(std::string name, std::string type)
{
	Zombie z = Zombie(name, type);
	z.announce();
}


int		main()
{
	zombieOnStack("Henry", "slow");

	randomChump(rand());
	randomChump(rand());
	randomChump(rand());

//	system("leaks -q dead");
	return (0);
}
