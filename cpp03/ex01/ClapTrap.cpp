/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:05:51 by bditte            #+#    #+#             */
/*   Updated: 2021/10/16 13:00:54 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (): _name(NULL), _hitPoints(10), _energyPoints(0), _attackDamage(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap (std::string name): _name(name), _hitPoints(10), _energyPoints(0), _attackDamage(0)
{
	std::cout << "Parameter ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap ()
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	ClapTrap::attack(std::string const& target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target
	<< " causing " << this->_attackDamage << " damages." << std::endl;
	this->_energyPoints -= 1;
	std::cout << "This cost 1 energy point. " << this->_name << " now has "
	<< this->_energyPoints << " energy points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << this->_name << " is already dead, he cannot take more damages." << std::endl;
		return ;
	}
	if (amount > this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << this->_name << " takes " << amount << " damages." << std::endl;
	if (this->_hitPoints == 0)
		std::cout << this->_name << " died." << std::endl;
	else
		std::cout << this->_name << " now has " << this->_hitPoints << " hitpoints." << std::endl;
	
}

void	ClapTrap::berepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	std::cout << this->_name << " recovers " << amount << " hitpoints." << std::endl;
	this->_energyPoints -= 1;
	std::cout << "This cost 1 energy point. " << this->_name << " now has "
	<< this->_energyPoints << " energy points" << std::endl;
}
