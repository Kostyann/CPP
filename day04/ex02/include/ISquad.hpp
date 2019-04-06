/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:14:14 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 19:14:16 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_H
# define ISQUAD_H

#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class ISquad {

public:

	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine *getUnit(int) const = 0;
	virtual int push(ISpaceMarine *) = 0;
};

#endif
