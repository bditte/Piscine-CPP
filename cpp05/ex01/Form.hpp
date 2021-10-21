/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:32:14 by bditte            #+#    #+#             */
/*   Updated: 2021/10/21 13:10:00 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string.h>
# include <exception>

class Bureaucrat;

class Form
{
    public:

    Form();
    Form(std::string const name, int signGrade, int execGrade);
    Form(Form const& src);
    ~Form();

	std::string const	getName() const;
    int					getSignGrade() const;
	int					getExecGrade() const;
	bool				getSignature() const;
	Form&				beSigned(Bureaucrat bureaucrat);


    Form& operator=(Form const& rhs);

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

    std::string const   name;
	int const			signGrade;
	int const			execGrade;
    bool				is_signed;
};

std::ostream& operator<<(std::ostream& o, Form const& rhs);

#endif