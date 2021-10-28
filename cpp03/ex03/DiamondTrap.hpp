/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:34:20 by bditte            #+#    #+#             */
/*   Updated: 2021/10/28 13:10:01 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:

	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap &src);
	~DiamondTrap();

	DiamondTrap& operator=(DiamondTrap &rhs);

	void	whoAmI();
	private:

	std::string 	_name;
};
#endif