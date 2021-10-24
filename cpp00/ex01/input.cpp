/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:20:32 by bditte            #+#    #+#             */
/*   Updated: 2021/10/23 11:40:34 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	ft_add(Phonebook *phonebook)
{
	int 		i;
	std::string	tmp;

	i = phonebook->getNbContacts();
	std::cout << "First name : ";
	std::cin >> tmp;
	phonebook->getContact(i).setFirstName(tmp);
	std::cout << "Last name : ";
	std::cin >> tmp;
	phonebook->getContact(i).setLastName(tmp);
	std::cout << "Nickname : ";
	std::cin >> tmp;
	phonebook->getContact(i).setNickname(tmp);
	std::cout << "Phone number : ";
	std::cin >> tmp;
	phonebook->getContact(i).setPhoneNumber(tmp);
	std::cout << "Secret : ";
	std::cin >> tmp;
	phonebook->getContact(i).setSecret(tmp);
	phonebook->getContact(i).setIndex(i);
	phonebook->setNbContacts(i + 1);
	return (0);
}

int	exec_cmd(const char *input, Phonebook *phonebook)
{
	if (!strcmp(input, "ADD"))
		ft_add(phonebook);
	if (!strcmp(input, "SEARCH"))
		ft_search(phonebook);
	if (!strcmp(input, "EXIT"))
		return (1);
	return (0);
}