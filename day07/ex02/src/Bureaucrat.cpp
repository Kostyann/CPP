/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 10:26:35 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/08 10:26:36 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name_("unknown"), grade_(150){}

Bureaucrat::Bureaucrat(std::string name, int grade): name_(name), grade_(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): name_(src.name_){*this = src;}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if(this != &rhs)
	{
		this->grade_ = rhs.grade_;
	}
	return *this;
}

Bureaucrat::~Bureaucrat(){return;}

std::string Bureaucrat::getName() const {return name_;}

int			Bureaucrat::getGrade() const {return grade_;}

void		Bureaucrat::upGrade()
{
	if (grade_ <= 1)
		throw GradeTooHighException();
	else
		grade_--;
}

void		Bureaucrat::downGrade()
{
	if (grade_ >= 150)
		throw GradeTooLowException();
	else
		grade_++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade you`re trying to assign to a bureaucrat is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade you`re trying to assign to a bureaucrat is too low";
}

std::ostream &		operator<<(std::ostream & o, Bureaucrat const & i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;

	return (o);
}
