/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:09:33 by bditte            #+#    #+#             */
/*   Updated: 2021/09/27 20:40:50 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	std::string	input;
	Phonebook	phonebook;

	while (1)
	{
		std::cin >> input;
		if (exec_cmd(input.c_str(), &phonebook))
			return (0);
	}
}
