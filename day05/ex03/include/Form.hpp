/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 12:06:38 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/08 12:06:40 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {

public:

	Form(void);
	Form(std::string, int, int, std::string);
	Form(Form const &);
	Form &	  operator=(Form const &);
	~Form(void);

	std::string	getName() const ;
	bool		getIsSigned() const ;
	int			getSignGrade() const ;
	int			getExecGrade() const ;
	std::string	getTarget() const ;

	virtual void	beSigned(Bureaucrat const &);
	virtual void	execute(Bureaucrat const &) const = 0;

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();

	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();

	};

	class FormNotSignedException : public std::exception {
	public:
		virtual const char* what() const throw();

	};

private:

	std::string	const	name_;
	bool		signed_;
	int			const	grade_sign_;
	int			const	grade_exec_;
	std::string			target_;
};

std::ostream &  operator<<(std::ostream & o, Form const & i);

#endif
