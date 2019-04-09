/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:21:14 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/09 18:21:16 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICE_BLOCK_H
# define OFFICE_BLOCK_H

# include <iostream>
# include <string>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

class OfficeBlock {

public:

	OfficeBlock(void);
	OfficeBlock(Intern*, Bureaucrat*, Bureaucrat*);
	~OfficeBlock(void);

	void	setIntern(Intern&);
	void	setSigner(Bureaucrat&);
	void	setExecutor(Bureaucrat&);

	void	doBureaucracy(std::string, std::string);

	class BlockNotFullException : public std::exception {
	public:
		virtual const char* what() const throw();

	};

private:

	OfficeBlock(OfficeBlock const &);
	OfficeBlock &	  operator=(OfficeBlock const &);

	Intern		*intern_;
	Bureaucrat	*signer_;
	Bureaucrat	*executor_;

};

#endif
