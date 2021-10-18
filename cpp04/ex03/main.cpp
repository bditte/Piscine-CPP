/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:05:40 by bditte            #+#    #+#             */
/*   Updated: 2021/10/18 13:15:29 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"

int	main(void)
{
	AMateria *ice = new Ice();
	AMateria *cure = new Cure();
	printf("Cure constructor\n");
	AMateria *ice_cpy = ice->clone();

	delete ice_cpy;
	delete ice;
	delete cure;
}