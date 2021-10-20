/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:27:11 by bditte            #+#    #+#             */
/*   Updated: 2021/10/20 11:43:36 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

void	Ice::use(ICharacter &target)
{
	std::cout<< "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}

AMateria* Ice::clone() const
{
	AMateria *tmp = new Ice(*this);
	return (tmp);
}

Ice::Ice(): AMateria("ice")
{

	return ;
}

Ice::Ice(Ice const& src): AMateria(src.getType())
{
	return ;
}

Ice::~Ice()
{
	return ;
}

Ice& Ice::operator=(Ice const& rhs)
{
	(void)rhs;
	return (*this);
}