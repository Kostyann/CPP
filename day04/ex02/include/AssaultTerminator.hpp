/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:13:37 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 19:13:39 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULT_TERMINATOR_H
# define ASSAULT_TERMINATOR_H

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {

public:

	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const & src);
	AssaultTerminator &	operator=(AssaultTerminator const & rhs);
	~AssaultTerminator(void);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

};

#endif
