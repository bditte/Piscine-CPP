/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:02:25 by bditte            #+#    #+#             */
/*   Updated: 2021/10/18 10:17:35 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const& src) : Animal("Cat")
{
	*this = src;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void	Cat::makeSound()
{
	std::cout << "Miaou!" << std::endl;
}

std::string Cat::getType()
{
	return (this->_type);
}

Cat& Cat::operator=(Cat const& rhs)
{
	this->_type = rhs._type;
	return (*this);
}