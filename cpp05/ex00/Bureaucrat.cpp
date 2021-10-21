/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:31:43 by bditte            #+#    #+#             */
/*   Updated: 2021/10/21 12:20:06 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
