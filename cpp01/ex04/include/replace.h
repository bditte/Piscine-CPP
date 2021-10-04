/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:27:02 by bditte            #+#    #+#             */
/*   Updated: 2021/10/04 13:18:50 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
# define REPLACE_H

#include <iostream>
#include <string.h>
#include <fstream>
#include <istream>

int	check_args(int argc, char **argv);
int	ft_putstr(const char *str);
int	ft_replace(std::string file_name, const char *s1, const char *s2);
#endif