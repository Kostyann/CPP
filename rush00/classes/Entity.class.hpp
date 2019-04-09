/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 12:08:43 by abulakh           #+#    #+#             */
/*   Updated: 2019/04/06 12:08:45 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITY_CLASS_HPP
# define ENTITY_CLASS_HPP
# define MAX_POSX 50
# define MAX_POSY 200
# include <iostream>


class Entity 
{
	public:
		Entity(unsigned int posx, unsigned int posy, unsigned int hit_p,
		unsigned int bullet, std::string name, std::string type);
		Entity(Entity const & src);
		Entity(void);
		~Entity(void);

		Entity &	operator=(Entity const & rhs);

		std::string getName(void);
		std::string getType(void);
		unsigned int getX(void);
		unsigned int getY(void);
		unsigned int getHP(void);
		void moveX(unsigned int);
		void moveY(unsigned int);
		unsigned int getBullet(void);
		void takeDamage(unsigned int);

	protected:
		unsigned int _x;
		unsigned int _y;
		unsigned int _hit_p;
		unsigned int _bullet;
		std::string _name;
		std::string _type;
};

#endif