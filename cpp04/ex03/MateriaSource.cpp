/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 22:06:23 by bditte            #+#    #+#             */
/*   Updated: 2021/10/21 22:31:03 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

AMateria* MateriaSource::createMateria(std::string const& type)
{
	if (!this->curr_mat)
		return (0);
	for (int i = 0; i < this->curr_mat; i++)
	{
		if (type.compare(this->inventory[i]->getType()) == 0)
			return (this->inventory[i]->clone());
	}
	return (0);
}

void	MateriaSource::learnMateria(AMateria *src)
{
	if (!src)
		return ;
	if (this->curr_mat < 4)
		this->inventory[this->curr_mat++] = src;
	return ;
}

MateriaSource::MateriaSource(): curr_mat(0)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const& src): curr_mat(0)
{
	*this = src;
	return ;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->curr_mat; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
	return ;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& rhs)
{
	for (int i = 0; i < this->curr_mat; i++)
		delete this->inventory[i];
	this->curr_mat = 0;
	for (int i = 0; i < rhs.curr_mat; i++)
		this->learnMateria(rhs.inventory[i]);
	for (int i = this->curr_mat; i < 4; i++)
		this->inventory[i] = NULL;
    return (*this);
}