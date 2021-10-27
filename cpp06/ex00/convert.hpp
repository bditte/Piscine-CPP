/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:43:57 by bditte            #+#    #+#             */
/*   Updated: 2021/10/27 17:25:16 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <climits>
# include <cfloat>
# include <cstdio>
# include <iomanip>
# include <cmath>

void convert_char(long double nbr);
void convert_int(long double nbr);
void convert_float(long double nbr, int precision);
void convert_double(long double nbr);
#endif