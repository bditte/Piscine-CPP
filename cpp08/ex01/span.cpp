/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:15:36 by bditte            #+#    #+#             */
/*   Updated: 2021/11/03 17:22:18 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		Span::longestSpan() const
{
	if (this->list.size() <= 1)
		throw Span::NotEnoughNumbersException();
	int min = *(std::min_element(this->list.begin(), this->list.end()));
	return *(std::max_element(this->list.begin(), this->list.end())) - min;
}

int		Span::shortestSpan()
{
	if (this->list.size() <= 1)
		throw Span::NotEnoughNumbersException();
	std::list<int>::const_iterator min = std::min_element(this->list.begin(), this->list.end());
	std::list<int>::iterator first = this->list.begin();
	std::list<int>::const_iterator end = this->list.end();
	int	ret;
	if (first == min)
		first++;
	ret = *first - *min;
	while (++first != end)
	{
		if (first == min)
			continue ;
		if (*first - *min < ret)
			ret = *first - *min;
	}
	return (ret);
}

void	Span::addNumber(int number)
{
	if (this->list.size() < this->max_size)
	{
		try
		{	
			this->list.push_back(number);
		}
		catch(const std::exception& e)
		{
			throw e;
		}
	}
	else
		throw Span::TooManyNumbersException();
	return ;
}

Span::Span(): max_size(0)
{
	return ;
}

Span::Span(unsigned int n): max_size(n)
{
	return ;
}

Span::~Span()
{
	return ;
}