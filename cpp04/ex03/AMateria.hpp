/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:58:49 by bditte            #+#    #+#             */
/*   Updated: 2021/10/20 11:37:29 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string.h>

class ICharacter;

class AMateria
{
	public:

	AMateria();
	AMateria(std::string const& type);
	AMateria(AMateria const& src);
	virtual ~AMateria();

	std::string const& getType() const;

	virtual AMateria* clone() const = 0;
	virtual void	  use(ICharacter& target);

	AMateria& operator=(AMateria const& rhs);

	protected:

	std::string const	type;

};
#endif