/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:22:27 by bditte            #+#    #+#             */
/*   Updated: 2021/11/03 16:05:15 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template <typename T>
typename T::iterator easyfind(T container, int value)
{
	typename T::iterator first = container.begin();
	typename T::iterator last = container.end();
	while (first != last)
	{
		if (*first == value)
			return first;
		first++;
	}
	return (last);
}

#endif