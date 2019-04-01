/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:07:11 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/01 14:07:15 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pbook.hpp"

int			main()
{
	std::string input;
	Contact contacts[8];

	std::cout << "<<--Welcome to the phone book 80s edition-->>..." << std::endl;
	std::cout << "...commands available are ADD, SEARCH and EXIT" << std::endl;
	while (1)
	{
		std::cin >> input;
		if (input.compare("EXIT") == 0)
			break;
		else if (input.compare("ADD") == 0)
			add(contacts);
		else if (input.compare("SEARCH") == 0)
			search(contacts);
	}
	return (0);
}
