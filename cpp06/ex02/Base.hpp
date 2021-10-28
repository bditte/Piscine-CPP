/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:08:49 by bditte            #+#    #+#             */
/*   Updated: 2021/10/28 09:51:45 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base
{
	public:

	virtual ~Base();
};

class A: public Base 
{
	public:

	A();
	std::string getType() const;

	private:
	
	std::string type;
};

class B: public Base 
{
	public:

	B();
	std::string getType() const;

	private:
	
	std::string type;
};

class C: public Base 
{
	public:

	C();
	std::string getType() const;

	private:
	
	std::string type;	
};

#endif