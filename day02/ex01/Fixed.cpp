/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:25:36 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/03 14:25:40 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): raw_(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const val): raw_(val << bits_)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(float const val)
{
	this->raw_ = (int)roundf(val * (1 << bits_));
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}




int			Fixed::getRawBits() const
{
	return this->raw_;
}

void		Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->raw_ = raw;
}

int			Fixed::toInt() const
{
	return this->raw_ >> bits_;
}

float		Fixed::toFloat() const
{
	return (float)this->raw_ / (1 << bits_);
}




Fixed & 	Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;

	if(this != &rhs)
		this->raw_ = rhs.getRawBits();

	return *this;
}

std::ostream &		operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();

	return (o);
}
