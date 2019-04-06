/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Visual.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:47:54 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/06 13:47:55 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Visual.hpp"

Visual::Visual()//: object_(0)
{
	return;
}

/*Visual::Visual(Object *object): object_(object)
{
	return ;
} */

Visual::Visual(Visual const &src)
{
	*this = src;
	return ;
}

Visual & 	Visual::operator=(Visual const &rhs)
{
	if(this != &rhs)
	{
	//	this->object_ = object_;
	}
	return *this;
}

Visual::~Visual()
{
	return;
}
