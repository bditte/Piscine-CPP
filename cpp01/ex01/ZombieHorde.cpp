/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:03:31 by bditte            #+#    #+#             */
/*   Updated: 2021/10/05 11:48:20 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie*	ZombieHorde;
	int		i;

	if (N < 1)
		return (NULL);
	try
  	{
		ZombieHorde = new Zombie[N];
  	}
  	catch (std::bad_alloc& ba)
  	{
  		std::cerr << "bad_alloc caught: " << ba.what() << '\n';
		return (NULL);
	}
	i = -1;
	while (++i < N)
	{
		ZombieHorde[i].setName(name);
	}
	return (ZombieHorde);
}