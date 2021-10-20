/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:54:55 by bditte            #+#    #+#             */
/*   Updated: 2021/10/05 11:02:58 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	RealKaren;

	if (argc == 1)
	{
		std::cout << "Atleast 1 argument is required." << std::endl;
		return (1);
	}
	else if (argc > 2)
	{
		std::cout << "Too many arguments." << std::endl;
		return (1);
	}
	RealKaren.complain(argv[1]);
	return (0);
}