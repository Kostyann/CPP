/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 11:15:11 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/03 11:15:12 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Human.hpp"

typedef  void (Human::*HumanMemFn)(const std::string &target);

void	Human::meleeAttack(const std::string &target)
{
	std::cout << "Attacks " << target << " with a sword!" << std::endl;
}

void	Human::rangedAttack(const std::string &target)
{
	std::cout << "Attacks " << target << " with a bow!" << std::endl;
}

void	Human::intimidatingShout(const std::string &target)
{
	std::cout << "Screams at " << target << "!" << std::endl;
}

void	Human::action(const std::string &action_name, const std::string &target)
{
	HumanMemFn a[] =
		{ &Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	std::string str[] =
			{ "meleeAttack", "rangedAttack", "intimidatingShout"};
	for (int i = 0; i < 3; i++)
	{
		if (action_name.compare(str[i]) == 0)
		{
			((*this).*(a[i])) (target);
			break;
		}
	}
}
