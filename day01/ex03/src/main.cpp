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
#include "../include/ZombieHorde.hpp"

void	make_horde()
{
	ZombieHorde horde = ZombieHorde(77);
	horde.announce();
}

int		main()
{
	make_horde();

//	system("leaks -q horde");
	return (0);
}
