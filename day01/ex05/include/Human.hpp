/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:56:41 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/02 15:56:45 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class Human {

public:

	Human();
	~Human();

	void		setName(std::string name);
	std::string	getName() const;
	Brain		&getBrain();

	std::string identify() const;

private:

	Brain		myBrain_;
	std::string name_;
};

#endif
