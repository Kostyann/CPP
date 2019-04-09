/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 12:06:47 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/08 12:06:51 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form(): name_("unknown"), signed_(0), grade_sign_(0), grade_exec_(0){}

Form::Form(std::string name, int grade_sign, int grade_exec):
name_(name), signed_(0), grade_sign_(grade_sign), grade_exec_(grade_exec)
{
	if (grade_sign_ < 1 || grade_exec_ < 1)
		throw GradeTooHighException();
	else if (grade_sign_ > 150 || grade_exec_ > 150)
		throw GradeTooLowException();
}

Form::Form(Form const &src): name_(src.name_), grade_sign_(src.grade_sign_),
grade_exec_(src.grade_exec_){*this = src;}

Form &	Form::operator=(Form const &rhs)
{
	if(this != &rhs)
	{
		this->signed_ = rhs.signed_;
	}
	return *this;
}

Form::~Form(){return;}

std::string Form::getName() const {return name_;}
bool		Form::getIsSigned() const {return signed_;}
int			Form::getSignGrade() const {return grade_sign_;}
int			Form::getExecGrade() const {return grade_exec_;}

void		Form::beSigned(Bureaucrat const &i)
{
	if (i.getGrade() < grade_sign_)
		signed_ = 1;
	else
		throw GradeTooHighException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "grade of the Form is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "grade of the Form is too low";
}

std::ostream &		operator<<(std::ostream & o, Form const & i)
{
	std::string str = (i.getIsSigned()) ? "Signed" : "Unsigned";
	o << i.getName() << " Form (s.grade " << i.getSignGrade() << ", ex.grade "
	<< i.getExecGrade() << ") (" << str << ")" << std::endl;

	return (o);
}
