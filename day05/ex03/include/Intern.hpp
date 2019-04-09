/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:52:02 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/09 15:52:03 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include <string>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {

public:

	Intern(void);
	Intern(Intern const &);
	Intern &	  operator=(Intern const &);
	~Intern(void);

	Form	*makeForm(std::string, std::string);

private:

	Form	*doShruberryForm(std::string);
	Form	*doRobotomyForm(std::string);
	Form	*doPardonForm(std::string);
};

#endif
