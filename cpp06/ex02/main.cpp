/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:10:27 by bditte            #+#    #+#             */
/*   Updated: 2021/10/27 18:55:57 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>

Base	*generate(void)
{
	int	random = rand() % 100;

	if (random < 33)
		return (new A());
	else if (random < 66)
		return (new B());
	return (new C());
}

void	identify(Base *p)
{
	try
	{
		A *a = dynamic_cast<A*>(p);
		std::cout << a->getType() << std::endl;		
	}
	catch(const std::bad_cast &e)
	{
		(void)e;
	}
	try
	{
		B *b = dynamic_cast<B*>(p);
		(void)b;
		std::cout << "B" << std::endl;		
	}
	catch(const std::bad_cast &e)
	{
		(void)e;
	}
	try
	{
		C *c = dynamic_cast<C*>(p);
		(void)c;
		std::cout << "C" << std::endl;		
	}
	catch(const std::bad_cast &e)
	{
		(void)e;
	}
	
}

int main(void)
{
	srand(time(NULL));
	Base *base = generate();
	identify(base);
	delete base;
}