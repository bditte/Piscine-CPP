/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:31:16 by bditte            #+#    #+#             */
/*   Updated: 2021/10/28 11:55:44 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap first("First");
	ScavTrap second("Second");

	std::cout << std::endl << "---- END OF CONSTRUCTORS ----" <<std::endl<<std::endl;

	first.attack(second.getName());
	second.takeDamage(first.getAttackDamage());
	second.attack(first.getName());
	first.takeDamage(second.getAttackDamage());
	second.berepaired(5);
	second.attack(first.getName());
	first.takeDamage(second.getAttackDamage());
	second.guardGate();

	std::cout << std::endl << std::endl << "---- BEGINNING OF DESTRUCTORS ----" <<std::endl;
	return (0);
}