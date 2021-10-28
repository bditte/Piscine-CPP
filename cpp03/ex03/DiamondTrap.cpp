/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:34:46 by bditte            #+#    #+#             */
/*   Updated: 2021/10/28 13:15:58 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("default_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = "default";
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
	std::cout << "DiamondTrap default constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name+"_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = name;
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
	std::cout << "DiamondTrap parameter constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap &src)
{
	*this = src;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap &rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Name : " << this->_name << std::endl
	<< "ClapTrap name : " << this->ClapTrap::_name << std::endl;
	
}
