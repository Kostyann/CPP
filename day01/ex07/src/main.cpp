/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 09:41:32 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/03 09:41:35 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int		main(int ac, char **av)
{
	if (ac == 4 && av[1][0] && av[2][0] && av[3][0])
	{
		std::string s1 = av[2];
		std::string s2 = av[3];

		std::ifstream ifs;
		ifs.exceptions ( std::ifstream::failbit | std::ifstream::badbit );
		try {
			ifs.open (av[1]);
			std::stringstream buff;
			buff << ifs.rdbuf();
			ifs.close();

			std::string file_out = av[1];
			file_out.append(".replace");
			std::ofstream ofs(file_out);

			std::string content = buff.str();
			std::size_t found;
			while ((found = content.find(s1))!=std::string::npos)
				content.replace(found, s1.length(), s2);

			ofs << content;
			ofs.close();
		}
		catch (std::ifstream::failure e) {
			std::cerr << "Exception opening/reading/closing file" << std::endl;
		}
	}
	else
		std::cerr << "usage: ./replace filename string1 string2" << std::endl;

	return (0);
}
