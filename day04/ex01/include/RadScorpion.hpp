/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:39:45 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 14:39:47 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAD_SCORPION_H
# define RAD_SCORPION_H

#include "Enemy.hpp"

class RadScorpion : public Enemy {

public:

	RadScorpion(void);
	RadScorpion(RadScorpion const & src);
	RadScorpion &	operator=(RadScorpion const & rhs);
	~RadScorpion(void);

};

#endif
