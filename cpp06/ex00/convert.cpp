/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:43:26 by bditte            #+#    #+#             */
/*   Updated: 2021/10/27 14:38:10 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void convert_char(long double nbr)
{
    char res;

    std::cout << "char: ";
    if (nbr < CHAR_MIN || nbr > CHAR_MAX)
        std::cout << "impossible" << std::endl;
    else if (isprint(nbr))
    {
        res = static_cast<char>(nbr);
        std::cout << res << std::endl;;
    }
    else
        std::cout << "Non displayable" << std::endl;
}

void convert_int(long double nbr)
{
    int res;

    std::cout << "int: ";
    if (nbr < INT_MIN || nbr > INT_MAX)
    {
        std::cout << "impossible" << std::endl;
    }
    else
    {
        res = static_cast<int>(nbr);
        std::cout << res << std::endl;
    }
}

void convert_float(long double nbr)
{
    float   res;

    res = static_cast<float>(nbr);
    std::cout << "float: " << res << std::endl;
}