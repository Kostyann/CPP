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

	Zombie(void);
	~Zombie(void);

	void		setName(std::string name);
	void		setType(std::string type);
	std::string	getName(void);
	std::string	getType(void);
	void		announce(void);

private:

	std::string	name_;
	std::string	type_;
};

#endif
