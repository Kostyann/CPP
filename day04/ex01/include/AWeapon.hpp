/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:38:20 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 14:38:22 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

#include <iostream>
#include <string>

class AWeapon {

public:

	AWeapon(void);
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & src);
	AWeapon &	operator=(AWeapon const & rhs);
	virtual ~AWeapon(void);

	std::string const	&getName() const;
	int					getAPCost() const;
	int					getDamage() const;
	virtual void		attack() const = 0;

private:

	std::string name_;
	int			apcost_;
	int			damage_;

};

#endif

