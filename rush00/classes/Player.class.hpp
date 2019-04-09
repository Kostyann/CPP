/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:30:16 by abulakh           #+#    #+#             */
/*   Updated: 2019/04/06 13:30:18 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_CLASS_HPP
# define PLAYER_CLASS_HPP

# include "Entity.class.hpp"
# include "Bullet.class.hpp"


class Player : public Entity
{
	public:
		Player(std::string name);
		Player(Player const & src);
		~Player(void);

		Player &	operator=(Player const & rhs);

		std::string model;
		Bullet *buls;
};

#endif
