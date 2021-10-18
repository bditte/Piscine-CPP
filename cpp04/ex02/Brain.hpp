/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:49:17 by bditte            #+#    #+#             */
/*   Updated: 2021/10/18 10:23:07 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string.h>

class Brain
{
	public:

	Brain();
	Brain(Brain const& src);
	~Brain();

	Brain& operator=(Brain const& rhs);

	protected:

	std::string ideas[100];
};

#endif