/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:10:27 by bditte            #+#    #+#             */
/*   Updated: 2021/10/28 10:47:48 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>

Base	*generate(void)
{
	int	random = rand() % 100;

	if (random < 33)
	{
		A* a;
		try
		{
			a = new A();
			return a;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			return (NULL);
		}
	}
	if (random < 66)
	{
		B* b;
		try
		{
			b = new B();
			return b;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			return (NULL);
		}
	}
	C* c;
	try
	{
		c = new C();
		return c;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (NULL);
	}
	return (NULL);
}

void	identify(Base *p)
{
	if (A *a = dynamic_cast<A*>(p))
	{
		std::cout << "A" << std::endl;		
		return ;
	}
	else if (B *b = dynamic_cast<B*>(p))
	{
		std::cout << "B" << std::endl;		
		return ;
	}
	std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << a.getType() << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << b.getType() << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << c.getType() << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	
}

int main(void)
{
	srand(time(NULL));
	Base *base = generate();
	if (!base)
		return (1);
	std::cout << "Type using pointer : ";
	identify(base);
	std::cout << "Type using references : ";
	identify(*base);
	delete base;
}