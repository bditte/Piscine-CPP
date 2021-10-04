/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:26:32 by bditte            #+#    #+#             */
/*   Updated: 2021/10/04 13:55:07 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.h"

int main(int argc, char **argv)
{
	std::string	filename;

	if (check_args(argc, argv))
		return (1);
	filename = argv[1];
	if (ft_replace(filename, argv[2], argv[3]))
		return (1);
	return (0);
}