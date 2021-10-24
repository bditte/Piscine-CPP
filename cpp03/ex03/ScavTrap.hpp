/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:05:14 by bditte            #+#    #+#             */
/*   Updated: 2021/10/16 12:22:37 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:

	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();

	ScavTrap& operator=(ScavTrap &rhs);

	void	attack(std::string const& target);
	void	guardGate();
};
#endif