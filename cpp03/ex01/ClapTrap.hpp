/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:02:14 by bditte            #+#    #+#             */
/*   Updated: 2021/10/28 11:33:11 by bditte           ###   ########.fr       */
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
	ClapTrap(ClapTrap const &src);
	~ClapTrap();

	std::string	getName() const;
	unsigned int	getHitPoints() const;
	unsigned int	getEnergyPoints() const;
	unsigned int	getAttackDamage() const;

	void	setName(std::string name);
	void	setHitPoints(unsigned int amount);
	void	setEnergyPoints(unsigned int amount);
	void	setAttackDamage(unsigned int amount);

	ClapTrap& operator=(ClapTrap const &rhs);

	void	attack(std::string const& target);
	void	takeDamage(unsigned int amount);
	void	berepaired(unsigned int amount);

	protected:

	std::string			_name;
	unsigned int 		_hitPoints;
	unsigned int 		_energyPoints;
	unsigned int 		_attackDamage;

};

#endif