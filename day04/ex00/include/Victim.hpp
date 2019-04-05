/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:23:17 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 12:23:19 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

#include <iostream>
#include <string>

class Victim {

public:

	Victim(std::string name);
	Victim(Victim const & src);
	Victim &	operator=(Victim const & rhs);
	~Victim(void);

	std::string		getName() const;
	virtual void	getPolymorphed() const;

protected:

	Victim(void);
	std::string name_;

};

std::ostream &  operator<<(std::ostream & o, Victim const & i);

#endif
