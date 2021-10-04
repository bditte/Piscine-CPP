/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:38:25 by bditte            #+#    #+#             */
/*   Updated: 2021/10/04 11:22:46 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	Weapon	WeaponA("crude spiked club");
	Weapon	WeaponB("crude spiked club");
	HumanA	Bob("Bob", WeaponA);
	HumanB	Jim("Jim");

	Jim.setWeapon(WeaponB);
	Bob.attack();
	Jim.attack();
	std::cout << "- - - Changing Weapons - - -" << std::endl;

	WeaponA.setType("some other type of club");
	WeaponB.setType("some other type of club");
	Bob.attack();
	Jim.attack();
	return (0);
}