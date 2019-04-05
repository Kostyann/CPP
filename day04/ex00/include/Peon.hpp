/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:23:28 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 12:23:30 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim {

protected:

	Peon(void);

public:

	Peon(std::string name);
	Peon(Peon const & src);
	Peon &	operator=(Peon const & rhs);
	~Peon(void);

	void		getPolymorphed() const;

};

#endif
