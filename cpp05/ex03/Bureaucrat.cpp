/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:31:43 by bditte            #+#    #+#             */
/*   Updated: 2021/10/22 12:02:15 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	Bureaucrat::executeForm(Form const& form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::string const Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void    Bureaucrat::decrementGrade()
{
    if (grade >= 150)
        throw Bureaucrat::GradeTooHighException();
    this->grade++;
}

void    Bureaucrat::incrementGrade()
{
    if (grade <= 1)
            throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void	Bureaucrat::signForm(Form& form) const
{
	try
	{
		form.beSigned(*this);
	}
	catch(Form::GradeTooLowException& e)
	{
		std::cout << this->getName() << " cannot sign " << form.getName()
		<< " because his grade is too low" << std::endl;
		return ;
	}
	std::cout << this->getName() << " signs " << form.getName() << std::endl;	
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& rhs)
{
    this->grade = rhs.getGrade();
    return (*this);
}

std::ostream& operator<<(std::ostream& o, Bureaucrat const& rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return (o);
}

Bureaucrat::Bureaucrat(std::string const name, int grade): name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
    return ;
}

Bureaucrat::Bureaucrat(): name("default"), grade(150)
{
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const& src)
{
    *this = src;
    return ;
}

Bureaucrat::~Bureaucrat()
{
    return ;
}
