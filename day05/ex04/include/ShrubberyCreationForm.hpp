/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 11:24:36 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/09 11:24:37 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRY_CREATION_FORM_H
# define SHRUBERRY_CREATION_FORM_H

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

public:

	ShrubberyCreationForm(std::string);
	ShrubberyCreationForm(ShrubberyCreationForm const &);
	ShrubberyCreationForm &	  operator=(ShrubberyCreationForm const &);
	~ShrubberyCreationForm(void);

	void	execute(Bureaucrat const &) const;

private:

	ShrubberyCreationForm(void);

};

#endif

