/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:37:44 by bditte            #+#    #+#             */
/*   Updated: 2021/10/22 13:25:08 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>

class Form;

class Intern
{
	public:

	Intern();
	Intern(Intern const& src);
	~Intern();

	Form*		makeForm(std::string type, std::string target);

	Intern& operator=(Intern const& rhs);
	
	private:

	std::string names[3];
	Form		(Form::*constructors[3])();
};

#endif