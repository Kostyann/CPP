/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:39:09 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/05 14:39:12 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

#include <iostream>
#include <string>

class Enemy {

public:

	Enemy(void);
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & src);
	Enemy &	operator=(Enemy const & rhs);
	virtual ~Enemy(void);

	std::string const	&getType() const;
	int					getHP() const;

	virtual void		takeDamage(int);

private:

	int			hp_;
	std::string type_;

};

#endif
