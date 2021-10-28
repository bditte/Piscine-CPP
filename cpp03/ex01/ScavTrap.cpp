/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:09:42 by bditte            #+#    #+#             */
/*   Updated: 2021/10/28 11:41:06 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap parameter constructor called" << std::endl;
	return ;
}


ScavTrap& ScavTrap::operator=(ScavTrap& rhs)
{
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return (*this);
}

ScavTrap::ScavTrap(ScavTrap &src)
{
	*this = src;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}


void	ScavTrap::attack(std::string const& target)
{
	std::cout << "ScavTrap " << this->getName() << " attacks " << target
	<< " causing " << this->getAttackDamage() << " damages." << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "This cost 1 energy point. " << this->getName() << " now has "
	<< this->getEnergyPoints() << " energy points" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << this->getName() << " has entered Gate keeper mode." << std::endl;
	return ;
}