/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:38:34 by bditte            #+#    #+#             */
/*   Updated: 2021/10/21 13:41:32 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

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

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target): target(target), Form(target, 145, 137)
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(): target("default"), Form("default", 145, 137)
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm::ShrubberyCreationForm const& src):
	target(src.target), Form(src)
{
    return ;
}

Form::~Form()
{
    return ;
}