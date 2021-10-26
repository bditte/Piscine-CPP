/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:36:03 by bditte            #+#    #+#             */
/*   Updated: 2021/10/22 12:32:50 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	srand(time(NULL));
	try
	{
		this->Form::canBeExecuted(executor);
		std::cout << "Brrrrrrr............Brrrrrrrrr" << std::endl;
		if (rand() % 2)
			std::cout << this->target << " got robotized !" << std::endl;
		else
			std::cout << this->target << " did not get robotized..." << std::endl;
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

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs)
{
	(void)rhs;
    return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target): Form(target, 72, 45),  target(target)
{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(): Form("default", 72, 45), target("default")
{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src): Form(src), 	target(src.target)
{
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return ;
}