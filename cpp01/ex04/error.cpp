/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:47:23 by bditte            #+#    #+#             */
/*   Updated: 2021/10/04 14:20:04 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.h"

int	ft_putstr(const char *str)
{
	std::cout << str << std::endl;
	return (1);
}

int	check_args(int argc, char **av)
{
	std::ifstream input;

	if (argc != 4)
		return (ft_putstr("Error: Wrong number of arguments"));
	input.open(av[1]);
	if (input.fail())
		return (ft_putstr("Error: Wrong input file"));
	if (!av[2][0])
		return (ft_putstr("Error: First string is empty"));
	if (!av[3][0])
		return (ft_putstr("Error: Second string is empty"));	
	input.close();
	return (0);
}