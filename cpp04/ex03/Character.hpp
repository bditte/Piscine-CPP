/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:11:22 by bditte            #+#    #+#             */
/*   Updated: 2021/10/18 13:25:49 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
	public:

	Character();
	Character(Character const& src);
	~Character();

	virtual	std::string const& getName();
	virtual	void equip(AMateria* m);
	virtual	void unequip(int idx);
	virtual void use(int idxm, ICharacter &target);

	Character& operator=(Character const& rhs);

	protected:

	AMateria	inventory[4];
};

#endif