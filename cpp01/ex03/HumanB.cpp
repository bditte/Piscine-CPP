/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:44:41 by bditte            #+#    #+#             */
/*   Updated: 2021/10/22 15:23:11 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack(void)	const
{
	if (!this->_weapon)
	{
		std::cout << this->_name << " can't attack because he is unarmed" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

HumanB::HumanB (std::string Name) : _name(Name), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB (void)
{
	return ;
}