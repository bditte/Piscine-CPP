/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:38:30 by bditte            #+#    #+#             */
/*   Updated: 2021/10/22 11:25:43 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string.h>
# include <exception>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:

    RobotomyRequestForm();
    RobotomyRequestForm(std::string const target);
    RobotomyRequestForm(RobotomyRequestForm const& src);
    ~RobotomyRequestForm();

	virtual void		execute (Bureaucrat const & executor) const;

	RobotomyRequestForm& operator=(RobotomyRequestForm const& rhs);

    private:

    std::string const target;
};

#endif