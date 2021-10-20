/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:09:42 by bditte            #+#    #+#             */
/*   Updated: 2021/10/16 13:26:05 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap parameter constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap& ScavTrap::operator=(ScavTrap& rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	ScavTrap::attack(std::string const& target)
{
	std::cout << "ScavTrap " << this->_name << " attacks " << target
	<< " causing " << this->_attackDamage << " damages." << std::endl;
	this->_energyPoints -= 1;
	std::cout << "This cost 1 energy point. " << this->_name << " now has "
	<< this->_energyPoints << " energy points" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << this->_name << " has entered Gate keeper mode." << std::endl;
	return ;
}