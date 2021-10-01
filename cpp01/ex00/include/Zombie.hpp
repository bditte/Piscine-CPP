/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 11:57:07 by bditte            #+#    #+#             */
/*   Updated: 2021/10/01 16:40:02 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>

class Zombie 
{
	public:

	void	announce(void);
	Zombie (void);
	Zombie (std::string name);
	~Zombie (void);

	private:

	std::string	_name;
};

Zombie* newZombie (std::string name);
Zombie	randomChump(std::string name);

#endif