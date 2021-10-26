/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:43:26 by bditte            #+#    #+#             */
/*   Updated: 2021/10/26 14:56:44 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void convert_char(long double nbr)
{
    char c = 127;

    std::cout << "char: ";
    if (nbr < -127 || nbr > 127)
        std::cout << "impossible" << std::endl;
    else if (isprint(nbr))
    {
        std::cout << c;
    }
    else
        std::cout << "Non displayable" << std::endl;
}