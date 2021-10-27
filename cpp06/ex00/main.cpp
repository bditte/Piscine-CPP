/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:14:11 by bditte            #+#    #+#             */
/*   Updated: 2021/10/27 14:42:59 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int is_nonprint(std::string str)
{
    if (!str.compare(0, str.length(), "nan") || !str.compare(0, str.length(), "inf") || !str.compare(0, str.length(), "-inf"))
        return (1);
    if (!str.compare(0, str.length(), "nanf") || !str.compare(0, str.length(), "inff") || !str.compare(0, str.length(), "-inff"))
        return (1);
    return (0);
}

int only_nbrs(std::string str)
{
    int i = 0;

    while (str[i])
    {
        if (std::isdigit(str[i]))
            i++;
        else if (str[i] == '.')
        {
            if (i == 0 && !str[i + 1])
                return (0);
            i++;
        }
        else if (str[i] == 'f' && !str[i + 1] && i != 0)
            return (1);
        else
            return (0);
    }
    return (1);
}

int main(int argc, char **argv)
{
    double  nbr;
    int     is_non_print;

    if (argc != 2)
    {
        std::cout << "Error: Wrong arguments. Usage : ./convert [number]" <<std::endl;
        return (0);
    }
    printf("here\n");
    nbr = std::strtold(argv[1], NULL);
    printf("here\n");
    if (nbr == 0 && !only_nbrs(argv[1]))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return (0);
    }
    is_non_print = is_nonprint(argv[1]);
    if (is_non_print)
        std::cout << "char: impossible" << std::endl;
    else
        convert_char(nbr);
    if (is_non_print)
        std::cout << "int: impossible" << std::endl;
    else
        convert_int(nbr);
    convert_float(nbr);
    std::cout << nbr << std::endl;
    return (0);
}