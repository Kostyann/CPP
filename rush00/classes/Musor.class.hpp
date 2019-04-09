/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Musor.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:44:46 by abulakh           #+#    #+#             */
/*   Updated: 2019/04/06 13:44:48 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUSOR_CLASS_HPP
# define MUSOR_CLASS_HPP

# include "Entity.class.hpp"

class Musor : public Entity
{
	public:
		Musor(unsigned int);
		Musor(Musor const & src);
		Musor(void);
		~Musor(void);

		Musor &	operator=(Musor const & rhs);

		std::string model;
};

#endif

