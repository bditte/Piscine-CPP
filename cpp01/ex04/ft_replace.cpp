/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:01:30 by bditte            #+#    #+#             */
/*   Updated: 2021/10/25 23:38:12 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.h"
#include <stdlib.h>

int	ft_find(int i, std::string src, std::string to_find)
{
	while (src[i])
	{
		if (!src.compare(i, to_find.length(), to_find.c_str()))
			return (i);
		i++;
	}
	return (-1);
}

std::string	edit_line(std::string line, const char *s1, const char *s2)
{
	std::string		src = s1;
	std::string		dst = s2;
	int				i;

	i = line.find(src);
	while (i >= 0)
	{
		line.erase(i, src.length());
		line.insert(i, s2);
		line += src.length();
		i = ft_find(i + dst.length(), line, src);
		if (i == -1)
			return (line);
	}
	return (line);
}

int	ft_replace(std::string file_name, const char *s1, const char *s2)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;

	infile.open(file_name.c_str());
	outfile.open(file_name.append(".replace").c_str());
	if (outfile.fail())
		return (ft_putstr("Error: Couldn't create file."));
	std::getline(infile, line);
	while (!infile.fail())
	{
		outfile << edit_line(line, s1, s2);
		std::getline(infile, line);
		if (!infile.fail())
			outfile << std::endl;
	}
	return (0);
}