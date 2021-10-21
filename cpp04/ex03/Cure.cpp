/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:03:05 by bditte            #+#    #+#             */
/*   Updated: 2021/10/20 16:15:11 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

void	Cure::use(ICharacter &target)
{
	std::cout<< "* heals " << target.getName() << "'s wounds *"<< std::endl;
}

AMateria* Cure::clone() const
{
	AMateria *tmp = new Cure(*this);
	return (tmp);
}

Cure::Cure(): AMateria("cure")
{
	return ;
}

Cure::Cure(Cure const& src): AMateria(src.getType())
{
	return ;
}

Cure::~Cure()
{
	return ;
}

Cure& Cure::operator=(Cure const& rhs)
{
	(void)rhs;
	return (*this);
}