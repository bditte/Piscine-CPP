/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:03:31 by bditte            #+#    #+#             */
/*   Updated: 2021/10/01 13:26:25 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie*	ZombieHorde;
	int		i;

	if (N < 1)
		return (NULL);
	ZombieHorde = new Zombie[N];
	i = -1;
	while (++i < N)
	{
		ZombieHorde[i].setName(name);
	}
	return (ZombieHorde);
}