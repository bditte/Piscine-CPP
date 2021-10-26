/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:38:30 by bditte            #+#    #+#             */
/*   Updated: 2021/10/22 11:42:29 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string.h>
# include <exception>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:

    PresidentialPardonForm();
    PresidentialPardonForm(std::string const target);
    PresidentialPardonForm(PresidentialPardonForm const& src);
    ~PresidentialPardonForm();

	virtual void		execute (Bureaucrat const & executor) const;

	PresidentialPardonForm& operator=(PresidentialPardonForm const& rhs);

    private:

    std::string const target;
};

#endif