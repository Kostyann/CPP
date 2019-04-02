/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 09:56:04 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 09:56:08 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(std::string name, int power)
{
	Pony*	Kobyla = new Pony(name, power);

	delete Kobyla;
}

void ponyOnTheStack(std::string name, int power)
{
	Pony	Kobyla = Pony(name, power);

	return;
}

int	main()
{
	ponyOnTheStack("Betsy", 7);
	ponyOnTheHeap("Lucky", 13);

	return (0);
}
