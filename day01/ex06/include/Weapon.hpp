/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:48:59 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 18:49:03 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Weapon {

public:

	Weapon();
	Weapon(std::string type);
	~Weapon();

	void		setType(std::string type);
	std::string	&getType();

private:

	std::string type_;

};

#endif
