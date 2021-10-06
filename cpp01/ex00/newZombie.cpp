/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:42:12 by bditte            #+#    #+#             */
/*   Updated: 2021/10/05 11:54:06 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie (std::string name)
{
	Zombie *zombptr;

	try
	{
		zombptr = new Zombie(name);
	}
	catch (std::bad_alloc& ba)
  	{
  		std::cerr << "bad_alloc caught: " << ba.what() << '\n';
		return (NULL);
	}
	zombptr->announce();
	return (zombptr);
}