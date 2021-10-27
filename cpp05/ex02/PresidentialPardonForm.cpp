/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:36:03 by bditte            #+#    #+#             */
/*   Updated: 2021/10/22 12:33:40 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	try
	{
		this->Form::canBeExecuted(executor);
		std::cout << this->target << " has been forgiven by Zafod Beeblebrox !" << std::endl;
	}
	catch (const Form::FormNotSignedException& e)
	{
		throw e;
	}
	catch (const Form::GradeTooLowException& e)
	{
		throw e;
	}
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs)
{
	(void)rhs;
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target): Form(target, 25, 5),  target(target)
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(): Form("default", 25, 5), target("default")
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src): Form(src), 	target(src.target)
{
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    return ;
}