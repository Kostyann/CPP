/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:38:39 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 14:38:42 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE_H
# define PLASMA_RIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:

	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const & src);
	PlasmaRifle &	operator=(PlasmaRifle const & rhs);
	~PlasmaRifle(void);

	void	attack() const;

};

#endif
