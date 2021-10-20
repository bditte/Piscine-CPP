/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:49:11 by bditte            #+#    #+#             */
/*   Updated: 2021/10/20 11:42:28 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <string>
class AMateria;

class ICharacter
{
	public:
	
	virtual ~ICharacter() {}
	virtual	std::string const& getName() const = 0;
	virtual	void equip(AMateria* m) = 0;
	virtual	void unequip(int idx) = 0;
	virtual void use(int idxm, ICharacter &target) = 0;

};

#endif