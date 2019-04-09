/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 11:24:24 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/08 11:24:26 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Intern.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/OfficeBlock.hpp"

int		main()
{
	Intern idiot_one;
	Bureaucrat liza = Bureaucrat("Liza Simpson", 30);
	Bureaucrat bart = Bureaucrat("Bart Simpson", 120);
	OfficeBlock ob;
	OfficeBlock ob1;

	ob.setIntern(idiot_one);
	ob.setSigner(liza);
	ob.setExecutor(bart);

	try
	{
		ob.doBureaucracy("mutant pig", "Pigley");
//		ob1.doBureaucracy("mutant pig", "Pigley");
//		ob.doBureaucracy("presidential pardon", "Thanos, the Destroyer");
//		ob.doBureaucracy("robotomy request", "Bender");
//		ob.doBureaucracy("shruberry creation", "Park");
	}
	catch (OfficeBlock::BlockNotFullException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Intern::FormUnknownException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
