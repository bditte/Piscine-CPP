/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:38:25 by bditte            #+#    #+#             */
/*   Updated: 2021/10/01 16:51:36 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	Weapon	kalash("AK-47");
	Weapon	rpg("AK-47");
	HumanA	stan("Stan", kalash);
	HumanB	brad("Brad");

	stan.attack();
	brad.setWeapon(rpg);
	brad.attack();
	kalash.setType("RPG");
	rpg.setType("RPG");
	brad.attack();
	stan.attack();
	std::cout << kalash.getType() << std::endl;
	std::cout << kalash.getType() << std::endl;
	return (0);
}