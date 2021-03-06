/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:44:45 by bditte            #+#    #+#             */
/*   Updated: 2021/10/25 15:38:38 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:

	void	attack(void) const;
	void	setWeapon(Weapon& weapon);

	HumanB(std::string Name);
	~HumanB(void);

	std::string getName() const;

	private:

	std::string	_name;
	Weapon		*_weapon;
};

#endif