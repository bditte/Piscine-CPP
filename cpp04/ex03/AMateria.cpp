/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:28:05 by bditte            #+#    #+#             */
/*   Updated: 2021/10/20 11:49:44 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

void	AMateria::use(ICharacter& target)
{
	std::cout << "* default materia use on " << target.getName() << " *" << std::endl;
}

std::string const& AMateria::getType() const
{
	return (this->type);
}

AMateria::AMateria()
{
	return ;
}

AMateria::AMateria(std::string const& type): type(type)
{
	return ;
}

AMateria::AMateria(AMateria const& src): type(src.getType())
{
	return ;
}

AMateria::~AMateria()
{
	return ;
}

AMateria& AMateria::operator=(AMateria const& rhs)
{
	(void)rhs;
	return (*this);
}