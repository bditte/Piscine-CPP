/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:37:38 by bditte            #+#    #+#             */
/*   Updated: 2021/10/22 13:28:36 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Form* Intern::makeForm(std::string type, std::string target)
{
	Form *res;

	*res = new 
}

Intern::Intern()
{
	this->names[0] = "shrubbery creation";
	this->names[1] = "robotomy request";
	this->names[2] = "presidential pardon";
	this->constructors[0] = &ShrubberyCreationForm::ShrubberyCreationForm;

	return ;
}

Intern::Intern(Intern const& src)
{
	(void)src;
	return ;
}

Intern::~Intern()
{
	return ;
}

Intern& Intern::operator=(Intern const& rhs)
{
	(void)rhs;
	return (*this);
}