/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 09:33:42 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 09:33:44 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>
#include <string>

class Pony {

public:

	Pony(std::string name, int magic_pow);
	~Pony(void);

	std::string	getName(void);
	int			getPow(void);

private:

	std::string	name_;
	int			magic_pow_;
};

#endif
