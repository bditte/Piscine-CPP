/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:30:25 by bditte            #+#    #+#             */
/*   Updated: 2021/10/25 15:34:12 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void) : _name("default")
{
	return ;
}

Zombie::Zombie (std::string name) : _name(name)
{
	return ;
}

Zombie::~Zombie (void)
{
	std::cout << getName() << " died...we'll miss him." << std::endl;
	return ;
}

void Zombie::announce (void)
{
	std::cout << getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName() const
{
	return (this->_name);
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}