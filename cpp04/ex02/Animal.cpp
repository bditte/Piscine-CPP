/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 14:49:18 by bditte            #+#    #+#             */
/*   Updated: 2021/10/18 11:52:10 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal(): _type("default_animal")
{
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const& src): _type(src._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string const& type)
{
	this->_type = type;
	std::cout << "Animal parameter constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

void	Animal::makeSound()
{
	std::cout << "* weird animal sound *" << std::endl;
}

std::string Animal::getType()
{
	return (this->_type);
}

Animal& Animal::operator=(Animal const& rhs)
{
	this->_type = rhs._type;
	return (*this);
}