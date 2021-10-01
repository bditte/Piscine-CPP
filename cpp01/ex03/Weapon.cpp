/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:33:49 by bditte            #+#    #+#             */
/*   Updated: 2021/10/01 15:53:27 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (std::string type) : _type(type)
{
	return ;
}

Weapon::~Weapon (void)
{
	return ;
}

void Weapon::setType (std::string type)
{
	this->_type = type;
}

const std::string& Weapon::getType (void) const
{
	const std::string& ref = this->_type;
	return (ref);
}