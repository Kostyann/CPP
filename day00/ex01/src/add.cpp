/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 16:59:47 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/01 16:59:50 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pbook.hpp"

void	add_contact(Contact *contact)
{
	Contact::incrNcont();
	std::cout << "Enter your first name: ";
	std::cin >> contact->first_name;
	std::cout << "Enter your last name: ";
	std::cin >> contact->last_name;
	std::cout << "Enter your nickname: ";
	std::cin >> contact->nickname;
	std::cout << "Enter your login: ";
	std::cin >> contact->login;
	std::cout << "Enter your postal address: ";
	std::cin >> contact->post_addr;
	std::cout << "Enter your email address: ";
	std::cin >> contact->email_addr;
	std::cout << "Enter your phone number: ";
	std::cin >> contact->phone_nbr;
	std::cout << "Enter your birthday date: ";
	std::cin >> contact->b_day;
	std::cout << "Enter your favourite meal: ";
	std::cin >> contact->meal;
	std::cout << "Enter the color of your underwear: ";
	std::cin >> contact->color;
	std::cout << "Share with us your darkest secret: ";
	std::cin >> contact->secret;
	std::cout << "Contact was successfully created!" << std::endl;
	std::cout << "...commands available are ADD, SEARCH and EXIT" << std::endl;
	return;
}

void	no_space()
{
	std::cout << "Sorry, no more space left! Try other options.." << std::endl;
	std::cout << "...commands available are SEARCH and EXIT" << std::endl;
}

void	add(Contact *contacts)
{
	if (Contact::getNcont() < 8)
		add_contact(&contacts[Contact::getNcont()]);
	else
		no_space();
}
