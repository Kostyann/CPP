/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Visual.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:27:36 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/06 13:27:38 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VISUAL_H
# define VISUAL_H

#include <iostream>
#include <string>
#include <ncurses.h>

class Visual {

public:

	Visual(void);
//	Visual(Object *);
	Visual(Visual const &src);
	Visual &operator=(Visual const &rhs);
	~Visual(void);

private:

//	Object *object_;
};

#endif
