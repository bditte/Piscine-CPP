/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:27:11 by bditte            #+#    #+#             */
/*   Updated: 2021/10/18 13:14:00 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

AMateria* Ice::clone() const
{
	AMateria *tmp = new Ice(*this);
	return (tmp);
}

Ice::Ice(): AMateria("ice")
{
	printf("Ice constructor\n");
	return ;
}

Ice::Ice(Ice const& src): AMateria(src.getType())
{
	printf("Ice cpy constructor\n");
	return ;
}

Ice::~Ice()
{
	printf("Ice destructor\n");
	return ;
}

Ice& Ice::operator=(Ice const& rhs)
{
	(void)rhs;
	return (*this);
}