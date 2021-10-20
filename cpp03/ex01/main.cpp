/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:31:16 by bditte            #+#    #+#             */
/*   Updated: 2021/10/16 13:00:38 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap first("First");
	ScavTrap second("Second");

	std::cout << std::endl << "---- END OF CONSTRUCTORS ----" <<std::endl<<std::endl;

	first.attack("Second");
	second.takeDamage(5);
	second.attack("First");
	first.takeDamage(20);
	second.berepaired(5);
	second.attack("First");
	first.takeDamage(20);

	std::cout << std::endl << std::endl << "---- BEGINNING OF DESTRUCTORS ----" <<std::endl;
	return (0);
}