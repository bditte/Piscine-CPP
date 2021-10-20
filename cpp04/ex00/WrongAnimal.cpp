/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:26:52 by bditte            #+#    #+#             */
/*   Updated: 2021/10/16 15:29:45 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(): _type("default_wronganimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string const& type)
{
	this->_type = type;
	std::cout << "WrongAnimal parameter constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

void	WrongAnimal::makeSound()
{
	std::cout << "* weird WrongAnimal sound *" << std::endl;
}

std::string WrongAnimal::getType()
{
	return (this->_type);
}