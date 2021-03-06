/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 14:49:02 by bditte            #+#    #+#             */
/*   Updated: 2021/10/18 11:53:13 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string.h>

class Animal
{
	public:

	Animal();
	Animal(std::string const& type);
	Animal(Animal const& src);
	virtual ~Animal();

	Animal& operator=(Animal const& rhs);

	std::string		getType();
	void virtual 	makeSound();

	protected:

	std::string _type;
};

#endif