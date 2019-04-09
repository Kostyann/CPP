/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:30:30 by abulakh           #+#    #+#             */
/*   Updated: 2019/04/06 13:30:32 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_CLASS_HPP
# define BULLET_CLASS_HPP

# include "Entity.class.hpp"

class Bullet : public Entity
{
	public:
		Bullet(unsigned int, unsigned int);
		Bullet(Bullet const & src);
		Bullet(void);
		~Bullet(void);

		Bullet &	operator=(Bullet const & rhs);

		std::string model;
};

#endif
