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

	Form(std::string, int, int);
	Form(Form const &);
	Form &	  operator=(Form const &);
	~Form(void);

	std::string	getName() const ;
	bool		getIsSigned() const ;
	int			getSignGrade() const ;
	int			getExecGrade() const ;

	void		beSigned(Bureaucrat const &);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();

	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();

	};

private:

	Form(void);
	std::string	name_;
	bool		signed_;
	int			grade_sign_;
	int			grade_exec_;
};

std::ostream &  operator<<(std::ostream & o, Form const & i);

#endif
