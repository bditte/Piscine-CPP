/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 10:27:55 by bditte            #+#    #+#             */
/*   Updated: 2021/10/20 17:07:31 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

void Character::use(int idxm, ICharacter &target)
{
    if (idxm < 4)
    {
        if (this->inventory[idxm])
        {
            this->inventory[idxm]->use(target);
            return ;
        }
    }
    std::cout << this->getName() << ": can't use this materia" << std::endl;
}

void Character::equip(AMateria *m)
{
	if (!m)
		return ;
    if (this->curr_mat < 4)
        this->inventory[this->curr_mat++] = m;
    return ;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (!this->inventory[idx])
		return ;
    for (int i = idx; i < 3; i++)
	{
		this->inventory[i] = this->inventory[i + 1];
        this->inventory[i] = NULL;    
    }
	this->curr_mat--;
    return ;
}

std::string const& Character::getName() const
{
    return(this->name);
}

Character::Character(): name("default"), curr_mat(0)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
    return ;
}

Character::Character(std::string name): name(name), curr_mat(0)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
    return ;
}

Character::Character(Character const& src)
{
    *this = src;
    return ;
}

Character::~Character()
{
	int	i = -1;

	while (++i < this->curr_mat)
	{
		delete this->inventory[i];
	}
    return ;
}

Character& Character::operator=(Character const& rhs)
{
    this->name = rhs.name;
	for (int i = 0; i < this->curr_mat; i++)
		delete this->inventory[i];
	this->curr_mat = 0;
	for (int i = 0; i < rhs.curr_mat; i++)
		this->equip(rhs.inventory[i]->clone());
	for (int i = this->curr_mat; i < 4; i++)
		this->inventory[i] = NULL;
    return (*this);
}