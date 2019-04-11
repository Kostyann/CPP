/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 13:12:10 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/10 13:12:11 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cfloat>
#include <math.h>

int		main(int ac, char **av)
{
	if (ac != 2)
		return (0);

	std::string param = av[1];
	char		c = 0;
	int			i = 0;
	float		f = 0;
	double		d = 0.0;
	long double	ld = 0.0;

	if (param.length() == 1 && (param.at(0) < 48 || param.at(0) > 57))
	{
		c = param.at(0);
		i = static_cast<int>(c);
		f = static_cast<float>(c);
		d = static_cast<double>(c);
		ld = static_cast<long double>(c);
	}
	else
	{
		ld = strtold(av[1], NULL);
		c = static_cast<char>(ld);
		i = static_cast<int>(ld);
		f = static_cast<float>(ld);
		d = static_cast<double>(ld);
	}

	if ((ld && (ld > CHAR_MAX || ld < CHAR_MIN)) || isnan(ld))
		std::cout << "char: " << "impossible" << std::endl;
	else if (c >= 32 && c <= 127)
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;

	if ((ld && (ld > INT_MAX || ld < INT_MIN)) || isnan(ld))
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;

	if (ld && (ld > FLT_MAX || ld < FLT_MIN) && !isinf(ld))
		std::cout << "float: " << "impossible" << std::endl;
	else
	{
		if (f == static_cast<float>(static_cast<int>(f)))
			std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << f << "f" << std::endl;
	}

	if (ld && (ld > DBL_MAX || ld < DBL_MIN) && !isinf(ld))
		std::cout << "double: " << "impossible" << std::endl;
	else
		std::cout << "double: " << d << std::endl;

	return (0);
}
























