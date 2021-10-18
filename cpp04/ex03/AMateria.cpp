/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:28:05 by bditte            #+#    #+#             */
/*   Updated: 2021/10/18 13:14:40 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

std::string const& AMateria::getType() const
{
	return (this->type);
}

AMateria::AMateria()
{
	printf("Materia default constructor\n");
	return ;
}

AMateria::AMateria(std::string const& type): type(type)
{
	printf("Materia param constructor\n");
	return ;
}

AMateria::AMateria(AMateria const& src): type(src.getType())
{
	printf("Materia cpy constructor\n");
	return ;
}

AMateria::~AMateria()
{
	printf("Materia destructor\n");
	return ;
}

AMateria& AMateria::operator=(AMateria const& rhs)
{
	(void)rhs;
	return (*this);
}