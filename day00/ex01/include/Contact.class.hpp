/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:17:48 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/01 14:17:52 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>

class Contact {

public:

	Contact(void);
	~Contact(void);

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string post_addr;
	std::string email_addr;
	std::string phone_nbr;
	std::string b_day;
	std::string meal;
	std::string color;
	std::string secret;

	static int	getNcont(void);
	static void	incrNcont(void);

private:

	static int	ncont_;
};

#endif
