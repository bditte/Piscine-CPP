/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:05:46 by bditte            #+#    #+#             */
/*   Updated: 2021/10/28 11:42:15 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &src);
	~FragTrap();

	FragTrap& operator=(FragTrap& rhs);

	void	highFivesGuys(void);
};

#endif