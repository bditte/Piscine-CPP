/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:34:52 by bditte            #+#    #+#             */
/*   Updated: 2021/10/22 14:55:36 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	check_heap_zombie(Zombie *zombie)
{
	zombie->announce();
	return (0);
}

int main(void)
{
	Zombie	*zombptr = newZombie("Zombie");
	randomChump("Chump");
	if (!zombptr)
		return (1);
	check_heap_zombie(zombptr);
	delete zombptr;
	return (0);
}