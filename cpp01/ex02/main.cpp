/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:39:56 by bditte            #+#    #+#             */
/*   Updated: 2021/10/01 13:47:08 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "str address : " << &str << std::endl;
	std::cout << "str address using pointer : " << stringPTR << std::endl;
	std::cout << "str address using reference : " << &stringREF << std::endl;

	std::cout << std::endl << "str value : " << str << std::endl;
	std::cout << "str value using pointer : " << *stringPTR << std::endl;
	std::cout << "str value using reference : " << stringREF << std::endl;
	return (0);
}