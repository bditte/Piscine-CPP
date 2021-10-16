/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:31:16 by bditte            #+#    #+#             */
/*   Updated: 2021/10/16 15:34:16 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal	*a = new Cat();
	Animal	*b = new Dog();
	Animal	*c = new Animal();
	WrongAnimal	*d = new WrongCat();
	std::cout << std::endl << "---- END OF CONSTRUCTORS ----" <<std::endl<<std::endl;

	std::cout << "Type " << a->getType() << " sound : ";
	a->makeSound();
	std::cout << "Type " << b->getType() << " sound : ";
	b->makeSound();
	std::cout << "Type " << c->getType() << " sound : ";
	c->makeSound();
	std::cout << "Type " << d->getType() << " sound : ";
	d->makeSound();

	std::cout << std::endl << std::endl << "---- BEGINNING OF DESTRUCTORS ----" <<std::endl;
	delete a;
	delete b;
	delete c;
	delete d;
	return (0);
}