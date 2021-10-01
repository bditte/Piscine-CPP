/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:34:52 by bditte            #+#    #+#             */
/*   Updated: 2021/10/01 12:56:42 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	check_stack_zombie(Zombie zombie)
{
	zombie.announce();
	return (0);
}

int	check_heap_zombie(Zombie *zombie)
{
	zombie->announce();
	return (0);
}

int main(void)
{
	Zombie	firstZomb = randomChump("Chump");
	Zombie	*zombptr = newZombie("Richto");

	check_stack_zombie(firstZomb);
	check_heap_zombie(zombptr);
	delete zombptr;
	return (0);
}