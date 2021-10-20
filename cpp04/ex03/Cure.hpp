/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:07:56 by bditte            #+#    #+#             */
/*   Updated: 2021/10/18 13:10:01 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
	public:

	Cure();
	Cure(Cure const& src);
	~Cure();

	virtual AMateria* clone() const;

	Cure& operator=(Cure const& rhs);
};

#endif
