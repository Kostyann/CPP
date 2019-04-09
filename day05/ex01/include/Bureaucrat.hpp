/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 10:26:46 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/08 10:26:47 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;
class Bureaucrat {

public:

	Bureaucrat(std::string, int);
	Bureaucrat(Bureaucrat const &);
	Bureaucrat &	  operator=(Bureaucrat const &);
	~Bureaucrat(void);

	std::string	getName() const ;
	int			getGrade() const ;

	void		upGrade();
	void		downGrade();
	void		signForm(Form &) const ;

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();

	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();

	};

private:

	Bureaucrat(void);
	std::string	const	name_;
	int					grade_;
};

std::ostream &  operator<<(std::ostream & o, Bureaucrat const & i);

#endif
