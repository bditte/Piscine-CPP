/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:55:00 by bditte            #+#    #+#             */
/*   Updated: 2021/10/25 15:48:59 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen	(void)
{
	this->f[0] = &Karen::debug;
	this->f[1] = &Karen::info;
	this->f[2] = &Karen::warning;
	this->f[3] = &Karen::error;
	this->f[4] = NULL;
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
		"WARNING",
		"ERROR",
	};

	int	level_id;

	level_id = 0;
	while (levels[level_id] && level.compare(levels[level_id]))
		level_id++;
	switch (level_id)
	{
	case (4):
		std::cout << "[ Probably complaining about "
		<< "insignificant problems ]" << std::endl;
	default:
		while (level_id < 4)
		{
			(this->*(f[level_id++]))();
			std::cout << std::endl;
		}
		break;
	}
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl
	<< "I love to get extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-special-ketchup "
	<< "burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl 
	<< "I cannot believe adding extra "
	<< "bacon cost more money. You don’t put enough! If you did I "
	<< "would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl
	<< "I think I deserve to have some extra "
	<< "bacon for free. I’ve beencoming here for years "
	<< "and you just started working here last month."<< std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl
	<< "This is unacceptable, I want to "
	<< "speak to the manager now." << std::endl;
}