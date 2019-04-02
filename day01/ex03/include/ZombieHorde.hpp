/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 12:37:06 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 12:37:10 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "Zombie.hpp"

class ZombieHorde {

public:

	ZombieHorde(int N);
	~ZombieHorde(void);

	void		announce(void);

private:

	int const Nzomb_;
	Zombie* Horde;
};

#endif
