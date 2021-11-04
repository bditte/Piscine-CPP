/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:15:36 by bditte            #+#    #+#             */
/*   Updated: 2021/11/04 12:31:06 by bditte           ###   ########.fr       */
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
	std::list<int>::iterator first = this->list.begin();
	std::list<int>::const_iterator end = this->list.end();
	int	ret = std::abs(*first - *(++first));
	first--;
	while (first != end)
	{
		std::list<int>::iterator tmp = first;
		tmp++;
		while (tmp != end)
		{
			if (std::abs(*first - *(tmp)) < ret)
				ret = std::abs(*first - *(tmp));
			tmp++;
		}
		first++;
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

void	Span::addRange(std::list<int>::iterator first, std::list<int>::iterator last)
{
	while (first != last && this->list.size() < this->max_size)
	{
		try
		{	
			this->list.push_back(*first);
		}
		catch(const std::exception& e)
		{
			throw e;
		}
		first++;
	}
	if (first != last && this->list.size() == this->max_size)
		throw Span::TooManyNumbersException();
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