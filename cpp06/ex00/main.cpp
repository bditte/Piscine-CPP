/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:14:11 by bditte            #+#    #+#             */
/*   Updated: 2021/10/26 14:44:31 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

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
        else if (str[i] == 'f' && !str[i + 1])
            return (1);
        else
            return (0);
    }
    return (1);
}

int main(int argc, char **argv)
{
    double nbr;

    if (argc != 2)
    {
        std::cout << "Error: Wrong arguments. Usage : ./convert [number]" <<std::endl;
        return (0);
    }
    nbr = std::strtold(argv[1], NULL);
    if (nbr == 0 && !only_nbrs(argv[1]))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return (0);
    }
    convert_char(nbr);
    std::cout << nbr << std::endl;
    return (0);
}