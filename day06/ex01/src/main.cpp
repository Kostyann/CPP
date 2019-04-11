/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 17:39:33 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/10 17:39:35 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <time.h>

struct Data{
	std::string	s1;
	int			n;
	std::string	s2;
};

void	*serialize(void)
{
	const char alpha[] = "0123456789abcdefghijklmnopqrstuvwxyz";

	Data *data = new Data;

	srand(time(0) + rand());
	for (int j = 0; j < 8; j++)
	{
		data->s1 += alpha[rand() % (sizeof(alpha) - 1)];
		data->s2 += alpha[rand() % (sizeof(alpha) - 1)];
	}
	data->n = rand();

	std::cout << "serialized 1st string: " << data->s1 << std::endl;
	std::cout << "serialized integer: " << data->n << std::endl;
	std::cout << "serialized 2nd string: " << data->s2 << std::endl;

	return reinterpret_cast<void *>(data);
}

Data	*deserialize(void *raw)
{
	return reinterpret_cast<Data *>(raw);
}

int		main()
{
	Data *result = deserialize(serialize());

	std::cout << "result 1st string: " << result->s1 << std::endl;
	std::cout << "result integer: " << result->n << std::endl;
	std::cout << "result 2nd string: " << result->s2 << std::endl;
	return (0);
}
