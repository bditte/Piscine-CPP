/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:31:16 by bditte            #+#    #+#             */
/*   Updated: 2021/10/15 15:45:47 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap first("First");
	ClapTrap second("Second");

	first.attack("Second");
	second.takeDamage(5);
	second.attack("First");
	first.takeDamage(10);
	second.berepaired(5);
	second.attack("First");
	first.takeDamage(10);
	return (0);
}