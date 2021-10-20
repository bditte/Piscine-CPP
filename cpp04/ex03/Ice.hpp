/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:27:37 by bditte            #+#    #+#             */
/*   Updated: 2021/10/20 11:25:29 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:

	Ice();
	Ice(Ice const& src);
	~Ice();

	virtual AMateria* clone() const;
	virtual void	  use(ICharacter& target);

	Ice& operator=(Ice const& rhs);
};

#endif