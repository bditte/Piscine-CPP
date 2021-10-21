/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:31:40 by bditte            #+#    #+#             */
/*   Updated: 2021/10/21 13:31:58 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATION_HPP
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

	ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);

    private:

    std::string const target;
};

#endif