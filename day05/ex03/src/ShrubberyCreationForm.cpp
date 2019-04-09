/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 11:24:22 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/09 11:24:24 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
Form("ShrubberyCreationForm", 145, 137, target){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src){*this = src;}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	Form::operator=(rhs);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){return;}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::string file_out = getTarget();
	file_out.append("_shruberry");
	std::ofstream ofs(file_out);
	std::string content = "   ###\n"
						  "      #o###\n"
						  "    #####o###\n"
						  "   #o#\\#|#/###\n"
						  "    ###\\|/#o#\n"
						  "     # }|{  #\n"
						  "       }|{";
	ofs << content;
	ofs.close();
}
