/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:38:34 by bditte            #+#    #+#             */
/*   Updated: 2021/10/22 12:01:44 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

void		Form::canBeExecuted(Bureaucrat const& executor) const
{
	if (this->getSignature())
	{
		if (executor.getGrade() > this->getExecGrade())
		{
			throw Form::GradeTooLowException();
		}
	}
	else
		throw Form::FormNotSignedException();
}

std::string const Form::getName() const
{
    return (this->name);
}

int Form::getSignGrade() const
{
    return (this->signGrade);
}

int Form::getExecGrade() const
{
    return (this->execGrade);
}

bool Form::getSignature() const
{
    return (this->is_signed);
}

Form& Form::beSigned(Bureaucrat bureaucrat)
{
	if (this->getSignGrade() < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	this->is_signed = true;
	return (*this);
}

Form& Form::operator=(Form const& rhs)
{
	this->is_signed = rhs.getSignGrade();
    return (*this);
}

std::ostream& operator<<(std::ostream& o, Form const& rhs)
{
    o << "Form " << rhs.getName();
	if (rhs.getSignature())
		o << " is signed.";
	else
		o << " is not signed.";
	o << " Grade to sign it : " << rhs.getSignGrade() << 
	". Grade to execute it : " << rhs.getExecGrade() << ".";
    return (o);
}

Form::Form(std::string const name, int signGrade, int execGrade): name(name), signGrade(signGrade), execGrade(execGrade)
{
	this->is_signed = false;
	if (signGrade < 1)
		throw Form::GradeTooHighException();
	if (signGrade > 150)
		throw Form::GradeTooLowException();
	if (execGrade < 1)
		throw Form::GradeTooHighException();
    if (execGrade > 150)
        throw Form::GradeTooLowException();
    return ;
}

Form::Form(): name("default"), signGrade(1), execGrade(1), is_signed(false)
{
    return ;
}

Form::Form(Form const& src): name(src.getName()), signGrade(src.getSignGrade()), execGrade(src.getExecGrade())
{
    this->is_signed = src.getSignature();
    return ;
}

Form::~Form()
{
    return ;
}