/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 12:06:47 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/08 12:06:51 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

AForm::AForm(): name_("unknown"), signed_(0){}

AForm::AForm(std::string name, int grade_sign, int grade_exec):
name_(name), signed_(0), grade_sign_(grade_sign), grade_exec_(grade_exec)
{
	if (grade_sign_ < 1 || grade_exec_ < 1)
		throw GradeTooHighException();
	else if (grade_sign_ > 150 || grade_exec_ > 150)
		throw GradeTooLowException();
}

AForm::AForm(AForm const &src){*this = src;}

AForm &	AForm::operator=(AForm const &rhs)
{
	if(this != &rhs)
	{
		this->name_ = rhs.name_;
		this->signed_ = rhs.signed_;
		this->grade_sign_ = rhs.grade_sign_;
		this->grade_exec_ = rhs.grade_exec_;
	}
	return *this;
}

AForm::~AForm(){return;}

std::string AForm::getName() const {return name_;}
bool		AForm::getIsSigned() const {return signed_;}
int			AForm::getSignGrade() const {return grade_sign_;}
int			AForm::getExecGrade() const {return grade_exec_;}
//void		AForm::setSignGrade(int grade) {grade_sign_ = grade;}
//void		AForm::setExecGrade(int grade) {grade_exec_ = grade;}

void		AForm::beSigned(Bureaucrat const &i)
{
	if (i.getGrade() < grade_sign_)
		signed_ = 1;
	else
		throw GradeTooHighException();
}

void		AForm::execute(Bureaucrat const &executor) const
{
	if (!signed_)
		throw FormNotSignedException();
	if (executor.getGrade() > grade_exec_)
		throw GradeTooHighException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "grade of the Form is too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "grade of the Form is too low";
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return "form is not signed";
}

std::ostream &		operator<<(std::ostream & o, AForm const & i)
{
	std::string str = (i.getIsSigned()) ? "Signed" : "Unsigned";
	o << i.getName() << " (s.grade " << i.getSignGrade() << ", ex.grade "
	<< i.getExecGrade() << ") (" << str << ")";

	return (o);
}
