/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:44:41 by bditte            #+#    #+#             */
/*   Updated: 2021/10/25 15:37:48 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void)	const
{
	std::cout << this->getName() << " attacks with his " << this->_weapon.getType() << std::endl;
}

std::string HumanA::getName() const
{
	return (this->_name);
}

HumanA::HumanA (std::string Name, Weapon& Weapon) : _name(Name), _weapon(Weapon)
{
	
	return ;
}

HumanA::~HumanA (void)
{
	return ;
}