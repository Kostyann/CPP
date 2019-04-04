/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:23:18 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/04 14:23:23 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap  {

public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	ScavTrap &	operator=(ScavTrap const & rhs);
	~ScavTrap(void);

	void	mindChallenge(std::string const & target);
	void	bodyChallenge(std::string const & target);
	void	saneChallenge(std::string const & target);
	void	alcoChallenge(std::string const & target);
	void	googChallenge(std::string const & target);

	void	challengeNewcomer(std::string const & target);
};

#endif
