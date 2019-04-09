/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Visual.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:01:04 by abulakh           #+#    #+#             */
/*   Updated: 2019/04/06 13:01:07 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Visual.class.hpp"

Visual::Visual(void)
{
	initscr();
	cbreak();
	noecho();
	curs_set(false);
	keypad(stdscr, TRUE);
	start_color();
	init_pair(FRAME, COLOR_OHRA, COLOR_OHRA);
	this->game_win = newwin(MAX_POSX, MAX_POSY, 1, 3);
	this->stat_win = newwin(7, MAX_POSY, MAX_POSX + 1, 3);
	box(this->game_win, 0, 0);
	box(this->stat_win, 0, 0);
	wattron(this->game_win, COLOR_PAIR(FRAME) | A_BOLD);
	wborder(this->game_win, '*', '*', '*', '*', '*', '*', '*', '*');
	wattroff(this->game_win, COLOR_PAIR(FRAME) | A_BOLD);
	wattron(this->stat_win, COLOR_PAIR(FRAME) | A_BOLD);
	wborder(this->stat_win, '*', '*', '*', '*', '*', '*', '*', '*');
	wattroff(this->stat_win, COLOR_PAIR(FRAME) | A_BOLD);
	refresh();
	mvwprintw(this->stat_win, 2, 3, "For control \"w\" - up | \"s\" - down | \"d\" - right | \"a\" - left | \"space\" - fire |");
	wrefresh(this->game_win);
	wrefresh(this->stat_win);
	nodelay(stdscr, true);
	start_color();
	init_pair(5, COLOR_GREEEN, COLOR_PINK);
	init_pair(2, COLOR_NBLUE, COLOR_BLACK);
	init_pair(3, COLOR_PINK, COLOR_BLACK);
	init_pair(4, COLOR_OHRA, COLOR_BLACK);
	init_pair(1, COLOR_BLACK, COLOR_BLACK);
	this->_init_clock = clock();
}

Visual::Visual(Visual const & src)
{
	*this = src;
}

Visual::~Visual(void)
{
	delwin(this->game_win);
	delwin(this->stat_win);
	endwin();
}

Visual &	Visual::operator=(Visual const & rhs)
{
	this->game_win = rhs.game_win;
	this->stat_win = rhs.stat_win;
	return *this;
}

void Visual::piupiu(void)
{
	for(size_t i = 0; i < this->pl->getBullet(); i++)
	{
		if (this->pl->buls[i].getX() == 1 && this->pl->buls[i].getY() == 1)
		{
			this->pl->buls[i].moveX(this->pl->getX());
			this->pl->buls[i].moveY(this->pl->getY() + 1);
			break;
		}
	}
}

void Visual::getChar(void)
{
	this->ch = getch();
	if (ch == 'x')
	{
		delwin(this->game_win);
		delwin(this->stat_win);
		endwin();
		exit(0);
	}
	else if (ch == 'w')
		this->pl->moveX(this->pl->getX() - 1);
	else if (ch == 's')
		this->pl->moveX(this->pl->getX() + 1);
	else if (ch == 'a')
		this->pl->moveY(this->pl->getY() - 1);
	else if (ch == 'd')
		this->pl->moveY(this->pl->getY() + 1);
	else if (ch == ' ')
		piupiu();
}

void Visual::cleanMap(void)
{
	for(size_t i = 1; i < MAX_POSY - 1; i++)
	{
		for(size_t j = 1; j < MAX_POSX - 1; j++)
		{
			wattron(this->game_win, COLOR_PAIR(1));
			mvwprintw(this->game_win, j, i, ".");
			wattroff(this->game_win, COLOR_PAIR(1));
		}
	}
}

void Visual::putPlayer(void)
{
	wattron(this->game_win, COLOR_PAIR(2));
	mvwprintw(this->game_win, this->pl->getX(), this->pl->getY(), ">");
	wattroff(this->game_win, COLOR_PAIR(2));
}

void Visual::putEnemy(void)
{
	wattron(this->game_win, COLOR_PAIR(3));
	for(size_t i = 0; i < NUM_ENEMY; i++)
	{
		mvwprintw(this->game_win, this->enemy[i].getX(), this->enemy[i].getY(), "<");
	}
	wattroff(this->game_win, COLOR_PAIR(3));
}

void Visual::putMusor(void)
{
	wattron(this->game_win, COLOR_PAIR(4) | A_BLINK);
	for(size_t i = 0; i < NUM_MUSOR; i++)
	{
		mvwprintw(this->game_win, this->musor[i].getX(), this->musor[i].getY(), "@");
	}
	wattroff(this->game_win, COLOR_PAIR(4) | A_BLINK);
}

void Visual::putBoss(void)
{
	wattron(this->game_win, COLOR_PAIR(5));
	for(size_t i = 0; i < NUM_COLLS; i++)
	{
		mvwprintw(this->game_win, this->boss->collis[i].x, this->boss->collis[i].y, "*");
	}
	wattroff(this->game_win, COLOR_PAIR(5));
}

void Visual::putBulles(void)
{
	wattron(this->game_win, COLOR_PAIR(4) | A_BOLD);
	for(size_t i = 0; i < this->pl->getBullet(); i++)
	{
		if (this->pl->buls[i].getX() != 1 && this->pl->buls[i].getY() != 1)
			mvwprintw(this->game_win, this->pl->buls[i].getX(), this->pl->buls[i].getY(), "-");
	}
	wattroff(this->game_win, COLOR_PAIR(4) | A_BOLD);
}

void Visual::putEnemyBulles(void)
{
	wattron(this->game_win, COLOR_PAIR(3) | A_BOLD);
	for(size_t j = 0; j < NUM_ENEMY; j++)
	{
		for(size_t i = 0; i < this->enemy->getBullet(); i++)
		{
			if (this->enemy[j].buls[i].getX() != 1 && this->enemy[j].buls[i].getY() != 1)
			{
				mvwprintw(this->game_win, this->enemy[j].buls[i].getX(), this->enemy[j].buls[i].getY(), "-");
			}
		}
	}
	for(size_t i = 0; i < this->boss->getBullet(); i++)
	{
		if (this->boss->buls[i].getX() != 1 && this->boss->buls[i].getY() != 1)
		{
			mvwprintw(this->game_win, this->boss->buls[i].getX(), this->boss->buls[i].getY(), "o");
		}
	}
	wattroff(this->game_win, COLOR_PAIR(3) | A_BOLD);
}

void Visual::moveEnemy(void)
{
	for(size_t i = 0; i < NUM_ENEMY; i++)
	{
		if (this->enemy[i].getY() - 1 == 0)
		{
			this->enemy[i].moveY(MAX_POSY - 2);
			this->enemy[i].moveX(1 + rand() % 48);
		}
		else
		{
			this->enemy[i].moveY(this->enemy[i].getY() - 1);
		}
	}
}

void Visual::moveMusor(void)
{
	for(size_t i = 0; i < NUM_MUSOR; i++)
	{
		if (this->musor[i].getY() - 1 == 0)
		{
			this->musor[i].moveY(MAX_POSY - 2);
			this->musor[i].moveX(1 + rand() % 48);
		}
		else
		{
			this->musor[i].moveY(this->musor[i].getY() - 1);
		}
	}
}

void Visual::createEnemyBuls(void)
{
	for(size_t i = 0; i < NUM_ENEMY; i++)
	{
		if (rand() % 30 == 1)
		{
			for(size_t j = 0; j < this->enemy[i].getBullet(); j++)
			{
				if (this->enemy[i].buls[j].getX() == 1 && this->enemy[i].buls[j].getY() == 1)
				{
					this->enemy[i].buls[j].moveX(this->enemy[i].getX());
					this->enemy[i].buls[j].moveY(this->enemy[i].getY() - 2);
					break;
				}
			}
		}
	}
	if (rand() % 5 == 1)
	{
		int k = 0;
		for(size_t j = 0; j < this->boss->getBullet(); j++)
		{
			if (this->boss->buls[j].getX() == 1 && this->boss->buls[j].getY() == 1 && k == 0)
			{
				this->boss->buls[j].moveX(this->boss->collis[3].x);
				this->boss->buls[j].moveY(this->boss->collis[3].y - 2);
				k++;
			}
			else if (this->boss->buls[j].getX() == 1 && this->boss->buls[j].getY() == 1 && k == 1)
			{
				this->boss->buls[j].moveX(this->boss->collis[7].x);
				this->boss->buls[j].moveY(this->boss->collis[7].y - 2);
				k++;
			}
			else if (k == 2)
			{
				break;
			}
		}
	}
}

void Visual::moveEnemyBullet(void)
{
	for(size_t j = 0; j < NUM_ENEMY; j++)
	{	
		for(size_t i = 0; i < this->enemy[j].getBullet(); i++)
		{
			if (this->enemy[j].buls[i].getY() - 1 == 0)
			{
				this->enemy[j].buls[i].moveY(1);
				this->enemy[j].buls[i].moveX(1);
			}
			else if (this->enemy[j].buls[i].getY() != 1 && this->enemy[j].buls[i].getX() != 1)
			{
				this->enemy[j].buls[i].moveY(this->enemy[j].buls[i].getY() - 1);
			}
		}
	}
	for(size_t i = 0; i < this->boss->getBullet(); i++)
	{
		if (this->boss->buls[i].getY() - 1 == 0)
		{
			this->boss->buls[i].moveY(1);
			this->boss->buls[i].moveX(1);
		}
		else if (this->boss->buls[i].getY() != 1 && this->boss->buls[i].getX() != 1)
		{
			this->boss->buls[i].moveY(this->boss->buls[i].getY() - 1);
		}
	}
}

void Visual::moveBullet(void)
{
	for(size_t i = 0; i < this->pl->getBullet(); i++)
	{
		if (this->pl->buls[i].getY() + 1 == MAX_POSY - 1)
		{
			this->pl->buls[i].moveY(1);
			this->pl->buls[i].moveX(1);
		}
		if (this->pl->buls[i].getY() != 1 && this->pl->buls[i].getX() != 1)
		{
			this->pl->buls[i].moveY(this->pl->buls[i].getY() + 1);
		}
	}
}

void Visual::collision(Player *pl, Enemy *en)
{
	for(size_t i = 0; i < NUM_ENEMY; i++)
	{
		if (pl->getX() == en[i].getX() && pl->getY() == en[i].getY())
		{
			pl->takeDamage(1);
			en[i].moveY(MAX_POSY - 2);
			en[i].moveX(1 + rand() % 48);
		}
		for(size_t j = 0; j < en[i].getBullet(); j++)
		{
			if (en[i].buls[j].getX() == 1 && en[i].buls[j].getY() == 1)
				continue;
			else if (pl->getX() == en[i].buls[j].getX() && pl->getY() == en[i].buls[j].getY())
			{
				pl->takeDamage(1);
				en[i].buls[j].moveY(1);
				en[i].buls[j].moveX(1);
			}
		}
		for(size_t j = 0; j < pl->getBullet(); j++)
		{
			if (pl->buls[j].getX() == 1 && pl->buls[j].getY() == 1)
				continue;
			else if (en[i].getX() == pl->buls[j].getX() && en[i].getY() == pl->buls[j].getY())
			{
				en[i].moveY(MAX_POSY - 2);
				en[i].moveX(1 + rand() % 48);
				pl->buls[j].moveY(1);
				pl->buls[j].moveX(1);
			}
		}
	}
}

void Visual::collision(Player *pl, Boss *bs)
{
	for(size_t i = 0; i < NUM_COLLS; i++)
	{
		if (pl->getX() == bs->collis[i].x && pl->getY() == bs->collis[i].y)
			pl->takeDamage(5);
		for(size_t j = 0; j < pl->getBullet(); j++)
		{
			if (pl->buls[j].getX() == 1 && pl->buls[j].getY() == 1)
				continue;
			else if (bs->collis[i].x == pl->buls[j].getX() && bs->collis[i].y == pl->buls[j].getY())
			{
				bs->takeDamage(1);
				pl->buls[j].moveY(1);
				pl->buls[j].moveX(1);
			}
		}
	}
	for(size_t j = 0; j < bs->getBullet(); j++)
	{
		if (bs->buls[j].getX() == 1 && bs->buls[j].getY() == 1)
			continue;
		else if (pl->getX() == bs->buls[j].getX() && pl->getY() == bs->buls[j].getY())
		{
			pl->takeDamage(1);
			bs->buls[j].moveY(1);
			bs->buls[j].moveX(1);
		}
	}
}

void Visual::collision(Player *pl, Musor *mus)
{
	for(size_t i = 0; i < NUM_MUSOR; i++)
	{
		if (pl->getX() == mus[i].getX() && pl->getY() == mus[i].getY())
		{
			pl->takeDamage(1);
			mus[i].moveY(MAX_POSY - 2);
			mus[i].moveX(1 + rand() % 48);
		}
		for(size_t j = 0; j < pl->getBullet(); j++)
		{
			if (pl->buls[j].getX() == mus[i].getX() && pl->buls[j].getY() == mus[i].getY())
			{
				mus[i].moveY(MAX_POSY - 2);
				mus[i].moveX(1 + rand() % 48);
				pl->buls[j].moveY(1);
				pl->buls[j].moveX(1);
			}
		}
	}
}

void Visual::collision(Enemy *en, Musor *mus)
{
	for(size_t i = 0; i < NUM_MUSOR; i++)
	{
		for(size_t j = 0; j < NUM_ENEMY; j++)
		{
			if (en[j].getX() == mus[i].getX() && en[j].getY() == mus[i].getY())
			{
				en[j].moveY(MAX_POSY - 2);
				en[j].moveX(1 + rand() % 48);
				mus[i].moveY(MAX_POSY - 2);
				mus[i].moveX(1 + rand() % 48);
			}
			for(size_t k = 0; k < en[j].getBullet(); k++)
			{
				if (en[j].buls[k].getX() == 1 && en[j].buls[k].getY() == 1)
					continue;
				if (en[j].buls[k].getX() == mus[i].getX() && en[j].buls[k].getY() == mus[i].getY())
				{
					en[j].buls[k].moveY(1);
					en[j].buls[k].moveX(1);
					mus[i].moveY(MAX_POSY - 2);
					mus[i].moveX(1 + rand() % 48);
				}
			}
		}
	}
}

void Visual::game_mode(void)
{
	this->pl = new Player("sanya");
	int i = 0;
	this->enemy = new Enemy[NUM_ENEMY];
	this->boss = new Boss("Boss", 1);
	this->musor = new Musor[NUM_MUSOR];
	while (true)
	{
		while (clock() - this->_init_clock < DELAY)
		{}
		this->_init_clock = clock();
		i++;
		cleanMap();
		putEnemy();
		putPlayer();
		putMusor();
		putBulles();
		putBoss();
		putEnemyBulles();
		this->getChar();
		if (i % 25 == 0)
		{
			moveBullet();
			moveEnemyBullet();
		}
		collision(this->pl, this->enemy);
		collision(this->pl, this->musor);
		collision(this->enemy, this->musor);
		collision(this->pl, this->boss);
		mvwprintw(this->stat_win, 4, 3, "Your Hit points = %d | Enemy Hit points = %3d |",
		this->pl->getHP(), this->boss->getHP());
		wrefresh(this->game_win);
		wrefresh(this->stat_win);
		if (this->pl->getHP() == 0)
			break;
		if (this->boss->getHP() == 0)
			break;
		if (i % 40 == 0)
		{
			if (rand() % 15 == 1)
				this->boss->moveUp();
			else if (rand() % 15 == 2)
				this->boss->moveDown();
			else
				this->boss->moveRight();
			moveEnemy();
			createEnemyBuls();
		}
		if (i % 80 == 0)
			moveMusor();
		if (i == 2500)
			i = 0;
	}
	mvwprintw(this->stat_win, 5, 3, "Press \"x\" for exit!!!");
	delete [] this->enemy;
	delete this->pl;
	delete this->boss;
	wrefresh(this->stat_win);
	while(1){
		i = (int)getch();
		if (i == 'x')
			break;
	}
}
