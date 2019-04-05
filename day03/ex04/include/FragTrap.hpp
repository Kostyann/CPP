/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 09:57:07 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/04 09:57:09 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	FragTrap &	operator=(FragTrap const & rhs);
	~FragTrap(void);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);

	void	vaulthunter_dot_exe(std::string const & target);

protected:

	unsigned int	energy_;
	unsigned int	max_energy_;
	unsigned int	melee_damage_;

};

#endif
