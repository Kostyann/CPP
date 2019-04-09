/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Boss.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 13:45:14 by abulakh           #+#    #+#             */
/*   Updated: 2019/04/07 13:45:15 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOSS_CLASS_HPP
# define BOSS_CLASS_HPP

# include "Entity.class.hpp"
# include "Bullet.class.hpp"
# define NUM_COLLS 16


typedef struct s_boss
{
	unsigned int x;
	unsigned int y;
}				t_boss;

class Boss : public Entity
{
	public:
		Boss(std::string name, unsigned int posx);
		Boss(Boss const & src);
		~Boss(void);

		Boss &	operator=(Boss const & rhs);

		std::string model;
		Bullet *buls;

		void moveUp(void);
		void moveRight(void);
		void moveDown(void);

		t_boss collis[NUM_COLLS];
};

#endif


