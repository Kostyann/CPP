/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:11:55 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 19:11:57 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	return;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src)
{
	*this = src;
	return ;
}

TacticalMarine & 	TacticalMarine::operator=(TacticalMarine const &rhs)
{
	if(this != &rhs)
	{

	}
	return *this;
}

TacticalMarine::~TacticalMarine()
{
	return;
}

