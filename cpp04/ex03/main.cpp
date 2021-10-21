/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:05:40 by bditte            #+#    #+#             */
/*   Updated: 2021/10/20 16:36:37 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include <cstdio>
#include "Character.hpp"
int	main(void)
{
	ICharacter* me = new Character("me");
	ICharacter* you = new Character("you");
	AMateria *ice = new Ice();
	AMateria *cure = new Cure();
	AMateria *ice_cpy = ice->clone();

	me->equip(ice);
	me->equip(ice);
	me->equip(ice);
	me->equip(cure);
	me->use(3, *you);
	me->unequip(0);
	me->use(0, *you);
	me->use(3, *you);

	delete me;
	delete you;
	delete ice_cpy;
	delete ice;
	delete cure;
}