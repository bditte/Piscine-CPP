/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:38:03 by bditte            #+#    #+#             */
/*   Updated: 2021/10/23 11:57:40 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	ft_search(Phonebook *phonebook)
{
	int			i;
	std::string	index;

	i = 0;
	if (phonebook->getNbContacts() == 0)
	{
		std::cout << "No contact registered." << std::endl;
		return (0);
	}
	while (phonebook->getContact(i).getIndex() >= 0)
	{
		phonebook->getContact(i).display();
		i++;
	}
	std::cin >> index;
	if (index.length() != 1 || !isdigit(index[0]))
	{
		std::cout << "Invalid index." << std::endl;
		return (0);
	}
	i = index[0] % 48;
	if (i >= 8 || phonebook->getContact(i).getIndex() == -1)
	{
		std::cout << "This contact does not exist." << std::endl;
		return (0);
	}
	phonebook->getContact(i).display_full();
	return (0);
}