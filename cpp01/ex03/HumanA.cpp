/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:44:41 by bditte            #+#    #+#             */
/*   Updated: 2021/10/01 16:46:26 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void)	const
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

HumanA::HumanA (std::string Name, Weapon& Weapon) : _name(Name), _weapon(Weapon)
{
	
	return ;
}

HumanA::~HumanA (void)
{
	return ;
}