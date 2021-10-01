/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 11:57:07 by bditte            #+#    #+#             */
/*   Updated: 2021/10/01 13:16:18 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

class Zombie 
{
	public:

	void	announce(void);
	void 	setName(std::string name);

	Zombie (void);
	Zombie (std::string name);
	~Zombie (void);

	private:

	std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);