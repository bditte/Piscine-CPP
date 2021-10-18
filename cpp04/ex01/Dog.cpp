/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:20:12 by bditte            #+#    #+#             */
/*   Updated: 2021/10/18 10:44:21 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
	return ;
}

Dog::Dog(Dog const& src) : Animal("Dog")
{
	this->brain = new Brain;
	*this->brain = *src.brain;
	this->_type= src._type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

void	Dog::makeSound()
{
	std::cout << "Woof!" << std::endl;
}

std::string Dog::getType()
{
	return (this->_type);
}

Dog& Dog::operator=(Dog const& rhs)
{
	this->_type = rhs._type;
	*this->brain = *rhs.brain;
	return (*this);
}