/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:10:35 by bditte            #+#    #+#             */
/*   Updated: 2021/11/03 17:22:04 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <list>
# include <iostream>
# include <algorithm>

class Span
{
	public:

	Span();
	Span(unsigned int n);
	~Span();

	void	addNumber(int number);

	int		shortestSpan()	;
	int		longestSpan()	const;

	class TooManyNumbersException: public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Error: Trying to add numbers in a full list");
		}
	};

	class NotEnoughNumbersException: public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Error: More numbers are required to do this");
		}
	};

	private:

	unsigned int max_size;
	std::list<int> list;
};

#endif