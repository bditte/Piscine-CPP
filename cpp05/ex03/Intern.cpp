/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:37:38 by bditte            #+#    #+#             */
/*   Updated: 2021/10/31 14:04:27 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Form* makeShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form* makeRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form* makePresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form* Intern::makeForm(std::string type, std::string target)
{
	int	i = 0;

	while (this->names[i].compare(type) && i < 3)
		i++;
	if (i == 3)
	{
		std::cout << type << ": Unknown form type." << std::endl;
		return (NULL);
	}
	Form *res = this->constructors[i](target);
	std::cout << "Intern creates " << type << std::endl;
	return (res);
}

Intern::Intern()
{
	this->names[0] = "shrubbery creation";
	this->names[1] = "robotomy request";
	this->names[2] = "presidential pardon";
	this->constructors[0] = makeShrubbery;
	this->constructors[1] = makeRobotomy;
	this->constructors[2] = makePresidential;
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