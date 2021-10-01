/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:30:46 by bditte            #+#    #+#             */
/*   Updated: 2021/10/01 16:54:18 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string.h>
# include <iostream>

class Weapon 
{
	public:

	const std::string& getType(void) const;
	void setType(std::string type);

	Weapon(std::string type);
	~Weapon(void);

	private:

	std::string	_type;
};

#endif