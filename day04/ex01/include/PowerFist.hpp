/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:38:57 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 14:38:59 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWER_FIST_H
# define POWER_FIST_H

#include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:

	PowerFist(void);
	PowerFist(PowerFist const & src);
	PowerFist &	operator=(PowerFist const & rhs);
	~PowerFist(void);

	void	attack() const;

};

#endif
