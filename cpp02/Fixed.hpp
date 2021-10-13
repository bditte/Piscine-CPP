/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:38:41 by bditte            #+#    #+#             */
/*   Updated: 2021/10/12 16:15:20 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{

	public:

	Fixed(void);
	Fixed(const Fixed& src);
	~Fixed(void);

	int	getRawBits(void) const;
	void	setRawBits(int const raw);

	Fixed&	operator=(Fixed& rhs);
	private:

	const int	_width;
	int			_value
	;
};



#endif