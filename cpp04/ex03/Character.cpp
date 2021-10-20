/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 10:27:55 by bditte            #+#    #+#             */
/*   Updated: 2021/10/20 11:42:59 by bditte           ###   ########.fr       */
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
    std::cout << this->getName() << ": can't use this materia" <<std::endl;
}

void Character::equip(AMateria *m)
{
    int i = 0;

    while (this->inventory[i])
        i++;
    if (i < 4)
    {
        this->inventory[i] = m->clone();
    }
    return ;
}

void Character::unequip(int idx)
{
    if (idx < 4)
    {
        this->inventory[idx] = NULL;    
    }
    return ;
}

std::string const& Character::getName() const
{
    return(this->name);
}

Character::Character(): name("default")
{
    return ;
}

Character::Character(std::string name): name(name)
{
    return ;
}

Character::Character(Character const& src)
{
    *this = src;
    return ;
}

Character::~Character()
{
    return ;
}

Character& Character::operator=(Character const& rhs)
{
    this->name = rhs.name;
    int i = 0;

    while (i < 4)
    {
        if (rhs.inventory[i])
            this->inventory[i] = rhs.inventory[i]->clone();
        i++;
    }
    return (*this);
}