/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:49:32 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 18:49:42 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

#include "Weapon.hpp"

class HumanB {

public:

	HumanB(std::string name);
	~HumanB();

	void		setName(std::string name);
	std::string	getName() const;

	void		attack();
	void		setWeapon(Weapon &weapon);

private:

	std::string name_;
	Weapon *weapon_;
};

#endif
