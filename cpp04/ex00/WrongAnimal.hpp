/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:26:52 by bditte            #+#    #+#             */
/*   Updated: 2021/10/16 15:35:09 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMALS_HPP
# define WRONGANIMALS_HPP

# include <iostream>
# include <string.h>

class WrongAnimal
{
	public:

	WrongAnimal();
	WrongAnimal(std::string const& type);
	virtual ~WrongAnimal();

	WrongAnimal& operator=(WrongAnimal& rhs);

	std::string		getType();
	void makeSound();

	protected:

	std::string _type;
};

#endif