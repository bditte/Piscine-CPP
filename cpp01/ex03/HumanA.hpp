/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:44:45 by bditte            #+#    #+#             */
/*   Updated: 2021/10/25 15:37:16 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:

	void	attack(void) const;

	HumanA(std::string Name, Weapon& Weapon);
	~HumanA(void);

	std::string	getName() const;

	private:

	std::string	_name;
	Weapon&		_weapon;
};

#endif