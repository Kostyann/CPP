/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:34:37 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 15:34:40 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *pstr = &str;
	std::string &ref_str = str;

	std::cout << *pstr << std::endl;
	std::cout << ref_str << std::endl;

	return (0);
}
