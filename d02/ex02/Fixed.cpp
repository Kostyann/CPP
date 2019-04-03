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
	return ;
}

Fixed::Fixed(int const val): raw_(val << bits_)
{
	return ;
}

Fixed::Fixed(float const val)
{
	this->raw_ = (int)roundf(val * (1 << bits_));
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;

	return ;
}

Fixed::~Fixed()
{
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

bool		Fixed::operator>(Fixed const &rhs) const
{
	return this->getRawBits() > rhs.getRawBits();
}

bool		Fixed::operator<(Fixed const &rhs) const
{
	return this->getRawBits() < rhs.getRawBits();
}

bool		Fixed::operator>=(Fixed const &rhs) const
{
	return this->getRawBits() >= rhs.getRawBits();
}

bool		Fixed::operator<=(Fixed const &rhs) const
{
	return this->getRawBits() <= rhs.getRawBits();
}

bool		Fixed::operator==(Fixed const &rhs) const
{
	return this->getRawBits() == rhs.getRawBits();
}

bool		Fixed::operator!=(Fixed const &rhs) const
{
	return this->getRawBits() != rhs.getRawBits();
}

Fixed		Fixed::operator+(Fixed const &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed		Fixed::operator-(Fixed const &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed		Fixed::operator*(Fixed const &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed		Fixed::operator/(Fixed const &rhs) const
{
	if (rhs.getRawBits() == 0)
		return Fixed();
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed		&Fixed::operator++(void)
{
	this->raw_++;
	return *this;
}

Fixed		&Fixed::operator--(void)
{
	this->raw_--;
	return *this;
}

Fixed		Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->raw_++;
	return (tmp);
}

Fixed		Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->raw_--;
	return (tmp);
}



std::ostream &		operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();

	return (o);
}
