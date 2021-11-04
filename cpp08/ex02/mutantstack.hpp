/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:23:42 by bditte            #+#    #+#             */
/*   Updated: 2021/11/04 11:23:01 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator& operator=(iterator const& rhs) { *this = rhs; return *this;}

	iterator begin();
};
#endif