/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:05:51 by bditte            #+#    #+#             */
/*   Updated: 2021/10/28 11:26:16 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (): _name(NULL), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap (std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Parameter ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap ()
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

unsigned int ClapTrap::getHitPoints() const
{
	return (this->_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return (this->_energyPoints);
}

unsigned int ClapTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(unsigned int amount)
{
	this->_hitPoints = amount;
}

void	ClapTrap::setEnergyPoints(unsigned int amount)
{
	this->_energyPoints = amount;
}

void	ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attackDamage = amount;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs)
{
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return (*this);
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
	*this = src;
}

void	ClapTrap::attack(std::string const& target)
{
	std::cout << "ClapTrap " << this->getName() << " attacks " << target
	<< " causing " << this->getAttackDamage() << " damages." << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "This cost 1 energy point. " << this->getName() << " now has "
	<< this->getEnergyPoints() << " energy points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHitPoints() == 0)
	{
		std::cout << this->getName() << " is already dead, he cannot take more damages." << std::endl;
		return ;
	}
	if (amount > this->getHitPoints())
		this->setHitPoints(0);
	else
		this->setHitPoints(this->getHitPoints() - amount);
	std::cout << this->getName() << " takes " << amount << " damages." << std::endl;
	if (this->getHitPoints() == 0)
		std::cout << this->getName() << " died." << std::endl;
	else
		std::cout << this->getName() << " now has " << this->getHitPoints() << " hitpoints." << std::endl;
	
}

void	ClapTrap::berepaired(unsigned int amount)
{
	this->setHitPoints(this->getHitPoints() + amount);
	std::cout << this->getName() << " recovers " << amount << " hitpoints." << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "This cost 1 energy point. " << this->getName() << " now has "
	<< this->getEnergyPoints() << " energy points" << std::endl;
}