/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:38:30 by bditte            #+#    #+#             */
/*   Updated: 2021/10/22 11:24:44 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

# include <iostream>
# include <string.h>
# include <exception>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public:

    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const target);
    ShrubberyCreationForm(ShrubberyCreationForm const& src);
    ~ShrubberyCreationForm();

	virtual void		execute (Bureaucrat const & executor) const;

	ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);

    private:

    std::string const target;
};

#endif