/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 14:49:02 by bditte            #+#    #+#             */
/*   Updated: 2021/10/29 12:28:09 by bditte           ###   ########.fr       */
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
	void virtual 	makeSound() = 0;

	protected:

	std::string _type;
};

#endif