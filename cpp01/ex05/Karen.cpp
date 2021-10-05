/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:55:00 by bditte            #+#    #+#             */
/*   Updated: 2021/10/04 15:45:49 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen	(void)
{
	this->fptr[0] = Karen::debug;
	this->fptr[1] = Karen::info;
	this->fptr[2] = Karen::warning;
	this->fptr[3] = Karen::error;
	this->fptr[4] = NULL;
	return ;
}

Karen::~Karen	(void)
{
	return ;
}

void	Karen::complain(std::string	level)
{
	const char *levels[4] = {
		"DEBUG",
		"INFO",
		"WARNINGt",
		"ERROR",
	};

	int	level_id;

	level_id = 0;
	while (levels[level_id] && level.compare(levels[level_id]))
		level_id++;
	if (levels[level_id])
	{
		this->fptr[level_id](void);
		return ;
	}
	std::cout << "Unknown level" << std::endl;
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-special-ketchup "
	<< "burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra "
	<< "bacon cost more money. You don’t put enough! If you did I "
	<< "would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra "
	<< "bacon for free. I’ve beencoming here for years "
	<< "and you just started working here last month."<< std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to "
	<< "speak to the manager now." << std::endl;
}