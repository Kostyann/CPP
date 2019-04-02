/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 11:30:59 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 11:31:03 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent {

public:

	ZombieEvent(void);
	~ZombieEvent(void);

	void setZombieType(std::string type);
	Zombie*	newZombie(std::string name);

private:

	std::string type;
};

#endif
