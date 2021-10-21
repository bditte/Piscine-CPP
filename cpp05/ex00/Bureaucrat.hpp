/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:25:59 by bditte            #+#    #+#             */
/*   Updated: 2021/10/21 12:29:42 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string.h>
# include <exception>

class Bureaucrat
{
    public:

    Bureaucrat();
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat const& src);
    ~Bureaucrat();

    std::string const getName() const;
    int               getGrade() const;
    void    incrementGrade();
    void    decrementGrade();

    Bureaucrat& operator=(Bureaucrat const& rhs);

    class GradeTooHighException: public std::exception
    {
        virtual const char* what() const throw()
        {
            return ("Grade is too high to do this");
        }
    };

    class GradeTooLowException: public std::exception
    {
        virtual const char* what() const throw()
        {
            return ("Grade is too low to do this");
        }
    };

    private:

    std::string const name;
    int               grade;
};

std::ostream& operator<<(std::ostream& o, Bureaucrat const& rhs);

#endif