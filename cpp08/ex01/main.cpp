/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:31:29 by bditte            #+#    #+#             */
/*   Updated: 2021/11/04 12:31:39 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <cstdlib>

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
	std::cout << "longest span : " << mediumSpan.longestSpan() << std::endl;

	/* Checking adding numbers using range */

	std::cout << "Span using range : " << std::endl;

	int	numbers[] = {25, 84, 65489, 87, 564, 321, 21, -87};
	Span rangeSpan(8);
	std::list<int> list(numbers, numbers+8);

	try
	{	
		rangeSpan.addRange(list.begin(), list.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{	
		rangeSpan.addRange(list.begin(), list.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	


	std::cout << "shortest span : " << rangeSpan.shortestSpan() << std::endl;
	std::cout << "longest span : " << rangeSpan.longestSpan() << std::endl;
	
	/* Checking Span supports big numbers */
	
	std::cout << "Big Span : " << std::endl;
	srand(time(NULL));
	Span bigSpan(10000);
	for (int i = 0; i < 10000; i++)
		bigSpan.addNumber(rand() % 100000);
	std::cout << bigSpan.longestSpan() <<std::endl;
	return (0);
}