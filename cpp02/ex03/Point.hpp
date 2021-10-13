/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:14:04 by bditte            #+#    #+#             */
/*   Updated: 2021/10/13 19:24:56 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		
	Point();
	Point(Point& src);
	Point(Fixed x, Fixed y);
	~Point();

	Point& operator=(Point rhs);
	private:

	Fixed const x;
	Fixed const y;

};



#endif