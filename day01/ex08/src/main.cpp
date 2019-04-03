/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 11:15:19 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/03 11:15:21 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Human.hpp"

int		main()
{
	Human jo = Human();

	jo.action("meleeAttack", "himself");
	jo.action("rangedAttack", "rabbit");
	jo.action("intimidatingShout", "a cow");

	return (0);
}
