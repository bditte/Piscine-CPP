/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:25:51 by bditte            #+#    #+#             */
/*   Updated: 2021/10/31 14:08:21 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
    Bureaucrat BigBoss("BigBoss", 1);
	Bureaucrat LowestEmployee("LowestEmployee", 150);
	Bureaucrat MiddleEmployee("MiddleEmployee", 40);
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
	delete d;
    return (0);
}