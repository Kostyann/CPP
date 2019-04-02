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

void	randomChump()
{
	srand(time(0));
	std::string name;
	for (int i = 0; i < 6; ++i)
		name += alpha[rand() % (sizeof(alpha) - 1)];

	ZombieEvent event = ZombieEvent();
	event.setZombieType("fast");

	Zombie*	r = event.newZombie(name);
	r->announce();

	delete r;
}

int		main()
{
	Zombie z = Zombie("Henry", "slow");
	z.announce();

	randomChump();

//	system("leaks -q dead");
	return (0);
}
