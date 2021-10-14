/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:13:53 by bditte            #+#    #+#             */
/*   Updated: 2021/10/14 11:28:35 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point& Point::operator=(Point rhs)
{
	*(Fixed *)&this->x = rhs.x;
	*(Fixed *)&this->y = rhs.y;
	return (*this);
}

Point::Point(): x(0), y(0)
{
	return ;
}

Point::Point(Point& src): x(src.x), y(src.y)
{
	return ;
}

Point::Point(Fixed const x, Fixed const y): x(x), y(y)
{
	return ;
}

Point::~Point()
{
	return ;
}