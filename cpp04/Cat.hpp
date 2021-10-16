/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:01:43 by bditte            #+#    #+#             */
/*   Updated: 2021/10/16 15:16:31 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
	public:

	Cat();
	Cat(std::string const& type);
	~Cat();

	Cat& operator=(Cat& rhs);

	std::string	getType();
	void virtual		makeSound();
};

#endif