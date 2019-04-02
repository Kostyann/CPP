/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 11:02:06 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 11:02:10 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {

public:

	Zombie(std::string name, std::string type);
	~Zombie(void);

	std::string	getName(void);
	std::string	getType(void);
	void		announce(void);

private:

	std::string	name_;
	std::string	type_;
};

#endif
