/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:01:43 by bditte            #+#    #+#             */
/*   Updated: 2021/10/16 15:16:31 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:

	WrongCat();
	WrongCat(std::string const& type);
	~WrongCat();

	WrongCat& operator=(WrongCat& rhs);

	std::string	getType();
	void		makeSound();
};

#endif