/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:54:55 by bditte            #+#    #+#             */
/*   Updated: 2021/10/04 15:45:07 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	std::string	input;
	Karen	RealKaren;

	std::cout << "Enter a level : " << std::endl;
	std::cin >>	input;
	
	RealKaren.complain(input);
	return (0);
}