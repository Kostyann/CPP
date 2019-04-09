/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 11:24:52 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/09 11:24:54 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_H
# define ROBOTOMY_REQUEST_FORM_H

# include <iostream>
# include <string>
# include <fstream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm {

public:

	RobotomyRequestForm(std::string);
	RobotomyRequestForm(RobotomyRequestForm const &);
	RobotomyRequestForm &	  operator=(RobotomyRequestForm const &);
	~RobotomyRequestForm(void);

	void	execute(Bureaucrat const &) const;

private:

	RobotomyRequestForm(void);
	std::string target_;

};

#endif

