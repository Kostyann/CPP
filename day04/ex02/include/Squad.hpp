/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:12:57 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 19:12:58 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

struct s_squad {
	ISpaceMarine	*marine;
	s_squad			*next;
};

class Squad : public ISquad {

public:

	Squad(void);
	Squad(Squad const & src);
	Squad &	operator=(Squad const & rhs);
	~Squad(void);

	int getCount() const;
	ISpaceMarine *getUnit(int) const;
	int push(ISpaceMarine *);

private:

	int		count_;
	s_squad	*head;
	s_squad	*tail;

};

#endif
