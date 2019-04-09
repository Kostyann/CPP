/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:29:25 by abulakh           #+#    #+#             */
/*   Updated: 2019/04/06 13:29:27 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

# include "Entity.class.hpp"
# include "Bullet.class.hpp"

class Enemy : public Entity
{
	public:
		Enemy(std::string name, unsigned int);
		Enemy(void);
		Enemy(Enemy const & src);
		~Enemy(void);

		Enemy &	operator=(Enemy const & rhs);

		std::string model;
		Bullet *buls;
};

#endif

