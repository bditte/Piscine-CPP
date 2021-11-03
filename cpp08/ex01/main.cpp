/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:31:29 by bditte            #+#    #+#             */
/*   Updated: 2021/11/03 17:08:35 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span span(2);

	/* Checking Exceptions */

	span.addNumber(1);
	try
	{
		span.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	span.addNumber(2);
	try
	{
		span.addNumber(3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	/* Checking span functions */

	Span	mediumSpan(10);
	for (int i = 0; i < 10; i++)
		mediumSpan.addNumber(i);
	std::cout << "shortest span : " << mediumSpan.shortestSpan() << std::endl;
	std::cout << "shortest span : " << mediumSpan.longestSpan() << std::endl;

	srand(time(NULL));
	Span bigSpan(10000);
	for (int i = 0; i < 10000; i++)
		bigSpan.addNumber(rand() % 100000);
	std::cout << bigSpan.shortestSpan() <<std::endl;
	return (0);
}