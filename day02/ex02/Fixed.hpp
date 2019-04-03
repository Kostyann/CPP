/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:25:45 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/03 14:25:47 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {

private:

	int					raw_;
	static int const	bits_ = 8;

public:

	Fixed(void);
	Fixed(int const val);
	Fixed(float const val);
	Fixed(Fixed const & src);

	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;

	static Fixed &			min(Fixed& a, Fixed& b);
	static Fixed &			max(Fixed& a, Fixed& b);
	static const Fixed &	min(Fixed const & a, Fixed const & b);
	static const Fixed &	max(Fixed const & a, Fixed const & b);

	Fixed &		operator=(Fixed const & rhs);
	bool		operator>(Fixed const & rhs) const;
	bool		operator<(Fixed const & rhs) const;
	bool		operator>=(Fixed const & rhs) const;
	bool		operator<=(Fixed const & rhs) const;
	bool		operator==(Fixed const & rhs) const;
	bool		operator!=(Fixed const & rhs) const;

	Fixed		operator+(Fixed const & rhs) const;
	Fixed		operator-(Fixed const & rhs) const;
	Fixed		operator*(Fixed const & rhs) const;
	Fixed		operator/(Fixed const & rhs) const;
	Fixed		&operator++(void);
	Fixed		&operator--(void);
	Fixed		operator++(int);
	Fixed		operator--(int);

};

std::ostream &  operator<<(std::ostream & o, Fixed const & i);


#endif
