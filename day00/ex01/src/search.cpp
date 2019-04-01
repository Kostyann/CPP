/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 19:00:15 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/01 19:00:17 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pbook.hpp"

std::string	check_width(std::string str)
{
	if (str.size() > 10)
	{
		str[9] = '.';
		str.erase(10, str.size() - 10);
	}
	return str;
}

void		display_contact_card(Contact contact)
{
	std::cout << "First name - " << contact.first_name << std::endl;
	std::cout << "Last name - " << contact.last_name << std::endl;
	std::cout << "Nickname - " << contact.nickname << std::endl;
	std::cout << "Login - " << contact.login << std::endl;
	std::cout << "Postal address - " << contact.post_addr << std::endl;
	std::cout << "Email - " << contact.email_addr << std::endl;
	std::cout << "Phone number - " << contact.phone_nbr << std::endl;
	std::cout << "Bday - " << contact.b_day << std::endl;
	std::cout << "Favourite meal - " << contact.meal << std::endl;
	std::cout << "The color of underwear is -  " << contact.color << std::endl;
	std::cout << "First name - " << contact.secret << std::endl;
}

void		search(Contact *contacts)
{
	std::string input;
	int			index;

	std::cout << "     Index|First name| Last name|  Nickname" << std::endl;
	for (int i = 0; i < Contact::getNcont(); i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << check_width(contacts[i].first_name) << "|";
		std::cout << std::setw(10) << check_width(contacts[i].last_name) << "|";
		std::cout << std::setw(10) << check_width(contacts[i].nickname) << std::endl;
	}
	std::cout << "Enter an index of desired entry: ";
	std::cin >> input;
	index = input.at(0) - 48;
	if (input.size() == 1 && index >= 0 && index < 8 && index < Contact::getNcont())
		display_contact_card(contacts[input.at(0) - 48]);
	else
		std::cout << "No such entry..." << std::endl;
	std::cout << "...commands available are ADD, SEARCH and EXIT" << std::endl;
}
