/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 12:41:45 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 12:41:49 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ZombieHorde.hpp"

static const char alpha[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

ZombieHorde::ZombieHorde(int N) : Nzomb_(N)
{
	std::string name;
	if (Nzomb_ > 0)
		this->Horde = new Zombie[Nzomb_];

	for (int i = 0; i < Nzomb_; i++)
	{
		srand(time(0) + i);
		for (int j = 0; j < 6; j++)
			name += alpha[rand() % (sizeof(alpha) - 1)];
		this->Horde[i].setName(name);
		this->Horde[i].setType("dump");
		name.clear();
	}
}

ZombieHorde::~ZombieHorde()
{
	if (Nzomb_ > 0)
		delete [] this->Horde;
	return;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < Nzomb_; i++)
		std::cout << this->Horde[i].getName() << " (" << this->Horde[i].getType()
			  << ") says: Hungryy..gh.gh" << std::endl;
}
