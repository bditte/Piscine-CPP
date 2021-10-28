/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:47:45 by bditte            #+#    #+#             */
/*   Updated: 2021/10/27 18:05:59 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main()
{
	Data	data;
	
	std::cout << "adress before serialization : " << &data << std::endl;
	std::cout << "adress after serialization : ";
	std::cout << deserialize(serialize(&data)) << std::endl;
	return (0);
}