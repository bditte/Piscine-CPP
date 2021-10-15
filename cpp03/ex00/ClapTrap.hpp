/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:02:14 by bditte            #+#    #+#             */
/*   Updated: 2021/10/15 15:19:27 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string.h>
# include <iostream>

class ClapTrap
{
	public:

	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();

	ClapTrap& operator=(ClapTrap const &rhs);

	void	attack(std::string const& target);
	void	takeDamage(unsigned int amount);
	void	berepaired(unsigned int amount);

	private:

	std::string			_name;
	unsigned int 		_hitPoints;
	unsigned int 		_energyPoints;
	unsigned int 		_attackDamage;

};

#endif