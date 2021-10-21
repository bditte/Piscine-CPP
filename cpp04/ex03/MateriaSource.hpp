/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:27:37 by bditte            #+#    #+#             */
/*   Updated: 2021/10/21 22:22:49 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:

	MateriaSource();
	MateriaSource(MateriaSource const& src);
	virtual ~MateriaSource();

	virtual void 			learnMateria(AMateria *src);
	virtual AMateria*		createMateria(std::string const & type);

	MateriaSource&	operator=(MateriaSource const& rhs);

	private:

	int			curr_mat;
	AMateria* inventory[4];
};

#endif