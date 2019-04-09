/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 11:25:34 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/09 11:25:35 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_H
# define PRESIDENTIAL_PARDON_FORM_H

# include <iostream>
# include <string>
# include <fstream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm {

public:

	PresidentialPardonForm(std::string);
	PresidentialPardonForm(PresidentialPardonForm const &);
	PresidentialPardonForm &	  operator=(PresidentialPardonForm const &);
	~PresidentialPardonForm(void);

	void	execute(Bureaucrat const &) const;

private:

	PresidentialPardonForm(void);
	std::string target_;

};

#endif

