/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:01:43 by bditte            #+#    #+#             */
/*   Updated: 2021/10/18 11:03:05 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal, private Brain
{
	public:

	Cat();
	Cat(Cat const& src);
	~Cat();

	Cat& operator=(Cat const& rhs);

	std::string	getType();
	void virtual		makeSound();

	private:
	
	Brain *brain;
};

#endif