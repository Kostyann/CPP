/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Visual.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:01:08 by abulakh           #+#    #+#             */
/*   Updated: 2019/04/06 13:01:10 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VISUAL_CLASS_HPP
# define VISUAL_CLASS_HPP

# include "Enemy.class.hpp"
# include "Player.class.hpp"
# include "Musor.class.hpp"
# include "Bullet.class.hpp"
# include "Boss.class.hpp"
# include <ncurses.h>
# include <iostream>
# include <fstream>
# define FRAME				100
# define COLOR_GREY			80
# define COLOR_LGREY		145
# define COLOR_PURPLE		91
# define COLOR_LPURPLE		140
# define COLOR_LRED			160
# define COLOR_OHRA			178
# define COLOR_ROSE			132
# define COLOR_FUCSIA		126
# define COLOR_BURGUNDI		89
# define COLOR_BIRUSA		69
# define COLOR_GREEEN		34
# define COLOR_NBLUE		81
# define COLOR_LBLUE		159
# define COLOR_LIME			154
# define COLOR_LBROWN		130
# define COLOR_VASIL		111
# define COLOR_PINK			200
# define NUM_ENEMY			30
# define NUM_MUSOR			10
# define DELAY		CLOCKS_PER_SEC / 500

class Visual 
{
	public:
		Visual(void);
		Visual(Visual const & src);
		~Visual(void);

		void game_mode(void);
		void getChar(void);
		void cleanMap(void);
		void putPlayer(void);
		void putEnemy(void);
		void putBulles(void);
		void putMusor(void);
		void putBoss(void);
		void putEnemyBulles(void);
		void moveEnemy(void);
		void moveMusor(void);
		void piupiu(void);
		void moveBullet(void);
		void moveEnemyBullet(void);
		void createEnemyBuls(void);

		void collision(Player *pl, Enemy *en);
		void collision(Player *pl, Boss *bs);
		void collision(Player *pl, Musor *mus);
		void collision(Bullet *buls, Enemy *en);
		void collision(Enemy *en, Musor *mus);

		Visual &	operator=(Visual const & rhs);

	private:
		int _init_clock;
		WINDOW *game_win;
		WINDOW *stat_win;
		char		ch;
		Player		*pl;
		Enemy		*enemy;
		Boss		*boss;
		Musor		*musor;
		
};

#endif