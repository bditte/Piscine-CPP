/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:43:26 by bditte            #+#    #+#             */
/*   Updated: 2021/10/27 17:42:26 by bditte           ###   ########.fr       */
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
int is_infinite_float(long double nbr)
{
    if (nbr == INFINITY || nbr == - INFINITY || !(nbr == nbr))
 		return (1);
    return (0);
}
void convert_float(long double nbr, int precision)
{
    float   res;

	std::cout << "float: ";
	if (is_infinite_float(nbr))
	{
		res = static_cast<float>(nbr);
		std::cout <<  res << "f" << std::endl;
	}
	else if (nbr < -FLT_MAX || nbr > FLT_MAX)
		std::cout << "impossible" << std::endl;
	else
	{
		res = static_cast<float>(nbr);
		std::cout << std::fixed << std::setprecision(precision) << res << "f" << std::endl;
	}
}

void convert_double(long double nbr)
{
	double res;

	std::cout << "double: ";
	if (is_infinite_float(nbr))
	{
		res = static_cast<float>(nbr);
		std::cout <<  res << std::endl;
	}
	else if (nbr < -DBL_MAX || nbr > DBL_MAX)
		std::cout << "impossible" << std::endl;
	else
	{
		res = static_cast<double>(nbr);
		std::cout << res << std::endl;
	}
}