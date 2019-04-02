/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:18:16 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/01 15:18:22 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pbook.hpp"

Contact::Contact() {
	return;
}

Contact::~Contact() {
	return;
}

int	Contact::getNcont(void) {
	return Contact::ncont_;
}

void	Contact::incrNcont(void) {
	Contact::ncont_++;
}

int Contact::ncont_ = 0;
