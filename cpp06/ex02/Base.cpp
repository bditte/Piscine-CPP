/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:54:07 by bditte            #+#    #+#             */
/*   Updated: 2021/10/27 19:00:04 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

std::string A::getType() const
{
	return (this->type);
}

A::A(): type("A")
{
	return ;
}

std::string B::getType() const
{
	return (this->type);
}

B::B(): type("B")
{
	return ;
}

B::~B()
{
	return ;
}

std::string C::getType() const
{
	return (this->type);
}

C::C(): type("C")
{
	return ;
}

Base::~Base()
{
	return ;
}