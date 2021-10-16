/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:19:52 by bditte            #+#    #+#             */
/*   Updated: 2021/10/16 15:20:55 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
	public:

	Dog();
	Dog(std::string const& type);
	~Dog();

	Dog& operator=(Dog& rhs);

	std::string	getType();
	void virtual		makeSound();
};

#endif