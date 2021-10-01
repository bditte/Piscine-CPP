/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:12:52 by bditte            #+#    #+#             */
/*   Updated: 2021/10/01 13:31:44 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie Zomb("firstZombie");
	Zombie	*Horde;
	int		i;

	Horde = zombieHorde(20, "Zomblard");

	i = -1;
	while (++i < 20)
	{
		Horde[i].announce();
	}
	delete [] Horde;
	return (0);
}