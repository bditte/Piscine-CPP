/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:25:51 by bditte            #+#    #+#             */
/*   Updated: 2021/10/22 12:33:00 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	Form* badform;
	badform = someRandomIntern.makeForm("random form", "There");
    Bureaucrat BigBoss("BigBoss", 1);
	Bureaucrat LowestEmployee("LowestEmployee", 150);

	BigBoss.executeForm(*rrf);
	LowestEmployee.signForm(*rrf);
	BigBoss.signForm(*rrf);
	BigBoss.executeForm(*rrf);

	delete rrf;
/*	Bureaucrat MiddleEmployee("MiddleEmployee", 40);
	Form	*b = new ShrubberyCreationForm("House");
	Form	*c = new RobotomyRequestForm("Car");
	Form	*d = new PresidentialPardonForm("Ford Prefect");

	try
	{
		MiddleEmployee.signForm(*b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	MiddleEmployee.executeForm(*b);
	try
	{
		MiddleEmployee.signForm(*c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	MiddleEmployee.executeForm(*c);
	try
	{
		MiddleEmployee.signForm(*d);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	MiddleEmployee.executeForm(*d);
	delete b;
	delete c;
	delete d;*/
    return (0);
}