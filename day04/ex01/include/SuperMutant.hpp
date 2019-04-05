/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:39:25 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 14:39:27 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_MUTANT_H
# define SUPER_MUTANT_H

#include "Enemy.hpp"

class SuperMutant : public Enemy {

public:

	SuperMutant(void);
	SuperMutant(SuperMutant const & src);
	SuperMutant &	operator=(SuperMutant const & rhs);
	~SuperMutant(void);

	void	takeDamage(int);

};

#endif
