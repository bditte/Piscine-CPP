/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 11:57:07 by bditte            #+#    #+#             */
/*   Updated: 2021/10/25 15:25:09 by bditte           ###   ########.fr       */
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

	std::string getName() const;

	private:

	std::string	_name;
};

Zombie* newZombie (std::string name);
void	randomChump(std::string name);

#endif