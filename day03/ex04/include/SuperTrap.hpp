/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 19:05:03 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/04 19:05:06 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_TRAP_H
# define SUPER_TRAP_H

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap {

public:

	SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const & src);
	SuperTrap &	operator=(SuperTrap const & rhs);
	~SuperTrap(void);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);

};

#endif
