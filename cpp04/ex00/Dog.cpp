/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:20:12 by bditte            #+#    #+#             */
/*   Updated: 2021/10/18 10:17:48 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	return ;
}

Dog::Dog(Dog const& src) : Animal("Dog")
{
	*this = src;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
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
	return (*this);
}