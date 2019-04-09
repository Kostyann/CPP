/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:19:12 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/09 18:19:14 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void): intern_(0), signer_(0), executor_(0){}

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor):
intern_(intern), signer_(signer), executor_(executor) {}

OfficeBlock::OfficeBlock(OfficeBlock const &src){*this = src;}

OfficeBlock &	OfficeBlock::operator=(OfficeBlock const &rhs)
{
	if(this != &rhs)
	{
		intern_ = rhs.intern_;
		signer_ = rhs.signer_;
		executor_ = rhs.executor_;
	}
	return *this;
}

OfficeBlock::~OfficeBlock(){return;}

void	OfficeBlock::setIntern(Intern &intern){intern_ = &intern;}

void	OfficeBlock::setSigner(Bureaucrat &signer) {signer_ = &signer;}

void	OfficeBlock::setExecutor(Bureaucrat &executor) {executor_ = &executor;}

void	OfficeBlock::doBureaucracy(std::string form_name, std::string target)
{
	if (!intern_ || !signer_ || !executor_)
		throw BlockNotFullException();
	Form *form;

	form = intern_->makeForm(form_name, target);
	signer_->signForm(*form);
	executor_->executeForm(*form);
}

const char* OfficeBlock::BlockNotFullException::what() const throw()
{
	return "Office block lacks employees";
}
