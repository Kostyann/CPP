/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:49:16 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 18:49:19 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

#include "Weapon.hpp"

class HumanA {

public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void		setName(std::string name);
	std::string	getName() const;

	void		attack();

private:

	std::string name_;
	Weapon &weapon_;
};

#endif
