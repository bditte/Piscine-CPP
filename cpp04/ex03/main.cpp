/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:05:40 by bditte            #+#    #+#             */
/*   Updated: 2021/10/21 22:30:38 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include <cstdio>
#include "Character.hpp"
#include "MateriaSource.hpp"
int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;tmp = src->createMateria("ice");
	me->equip(tmp);tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;

/*	ICharacter* me = new Character("me");
	ICharacter* you = new Character("you");
	AMateria *ice = new Ice();
	AMateria *cure = new Cure();
	AMateria *ice_cpy = ice->clone();

	me->equip(ice);
//	me->equip(ice);
//	me->equip(ice);
	me->equip(cure);
	me->use(3, *you);
	me->unequip(0);
	me->use(0, *you);
	me->use(2, *you);

	delete me;
	delete you;
	delete ice_cpy;
	delete ice;
	//delete cure;*/
}