/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:54:33 by bditte            #+#    #+#             */
/*   Updated: 2021/10/25 15:45:04 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string.h>

class Karen
{
	public:

	Karen(void);
	~Karen(void);

	void	complain(std::string level);
	
	private:

	void	(Karen::*f[5])(void);

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

#endif