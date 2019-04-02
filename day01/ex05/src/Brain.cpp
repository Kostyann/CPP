/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:57:05 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 15:57:08 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
//	std::cout << "Brain is born" << std::endl;
	return;
}

Brain::~Brain()
{
//	std::cout << "Brain killed" << std::endl;
	return;
}

void		Brain::setIq(int n)
{
	this->iq_ = n;
}

int			Brain::getIq() const
{
	return this->iq_;
}

std::string	Brain::identify() const
{
	std::stringstream address;
	address << (void const *)this;
	std::string addr = address.str();
	for (int i = 2; addr[i]; i++)
		addr[i] = toupper(addr[i]);
	return addr;
}
