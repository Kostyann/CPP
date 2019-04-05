/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:40:00 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 14:40:02 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {

public:

	Character(void);
	Character(std::string const & name);
	Character(Character const & src);
	Character &	operator=(Character const & rhs);
	~Character(void);

	void		recoverAP();
	void		equip(AWeapon*);
	void		attack(Enemy*);

	std::string	const	&getName() const;
	int			getAP() const;
	AWeapon		*getWeapon() const;

private:

	std::string name_;
	int			ap_;
	AWeapon		*weapon_;

};

std::ostream &  operator<<(std::ostream & o, Character const & i);

#endif
