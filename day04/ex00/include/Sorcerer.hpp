/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:23:04 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 12:23:06 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer {

public:

	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const & src);
	Sorcerer &	operator=(Sorcerer const & rhs);
	~Sorcerer(void);

	std::string	getName() const;
	std::string	getTitle() const;
	void		polymorph(Victim const &);

protected:

	Sorcerer(void);
	std::string name_;
	std::string	title_;

};

std::ostream &  operator<<(std::ostream & o, Sorcerer const & i);

#endif
