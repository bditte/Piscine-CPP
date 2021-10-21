/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:25:51 by bditte            #+#    #+#             */
/*   Updated: 2021/10/21 13:18:34 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{

    Bureaucrat a("BigBoss", 1);
    try
	{
		Form not_valid("not_valid", 20, 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Form	b("Contract", 20, 50);

    std::cout << a << std::endl;
    std::cout << b << std::endl << std::endl;

	a.signForm(b);
    std::cout << b << std::endl << std::endl;

	Bureaucrat c("Intern", 100);
	Form	   d("Bill", 50, 30);

	std::cout << c << std::endl;
    std::cout << d << std::endl << std::endl;

	c.signForm(d);
    std::cout << d << std::endl << std::endl;
    return (0);
}