/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:31:16 by bditte            #+#    #+#             */
/*   Updated: 2021/10/18 11:22:51 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	int	i = -1;
	Animal	*tab[20];

	while (++i < 20)
	{
		if (i < 10)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}
	std::cout << std::endl << "---- END OF CONSTRUCTORS ----" <<std::endl<<std::endl;
	i = -1;
	std::cout << std::endl << std::endl << "---- BEGINNING OF DESTRUCTORS ----" <<std::endl;
	while (++i < 20)
	{
		delete tab[i];
	}

	return (0);
}