/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:12:52 by bditte            #+#    #+#             */
/*   Updated: 2021/10/22 15:00:19 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie Zomb("firstZombie");
	Zombie	*Horde;
	int		i;

	Zomb.announce();
	Horde = zombieHorde(20, "ZombieOfTheHorde");

	i = -1;
	while (++i < 20)
	{
		Horde[i].announce();
	}
	delete [] Horde;
	return (0);
}