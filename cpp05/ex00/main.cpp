/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:25:51 by bditte            #+#    #+#             */
/*   Updated: 2021/10/21 12:55:07 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    try
    { 
        Bureaucrat a("a", 1000);
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    Bureaucrat b("b", 25);
    Bureaucrat c("c", 150);

    std::cout << b << std::endl;
    std::cout << c << std::endl;


    std::cout << "Trying to increment b's grade : " << std::endl;
    try
    {
        b.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << b << std::endl;
    std::cout << "Trying to decrement c's grade : " << std::endl;
    try
    {
        c.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << c << std::endl;
    return (0);
}