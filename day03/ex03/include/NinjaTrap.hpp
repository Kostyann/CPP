/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 18:10:01 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/04 18:10:03 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_H
# define NINJA_TRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {

public:

	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & src);
	NinjaTrap &	operator=(NinjaTrap const & rhs);
	~NinjaTrap(void);

	void	ninjaShoebox(ClapTrap const &);
	void	ninjaShoebox(FragTrap const &);
	void	ninjaShoebox(ScavTrap const &);
	void	ninjaShoebox(NinjaTrap const &);

};

#endif
