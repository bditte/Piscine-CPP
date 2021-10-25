/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:09:33 by bditte            #+#    #+#             */
/*   Updated: 2021/10/25 10:58:51 by bditte           ###   ########.fr       */
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
	while (i < phonebook->getNbContacts())
	{
		phonebook->getContact(i).display();
		i++;
	}
	std::cout << "Enter a contact index:";
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

int	ft_add(Phonebook *phonebook)
{
	int 		i;
	std::string	tmp;

	i = phonebook->getNbContacts();
	if (i == 8)
	{
		std::cout << "Phonebook is full: can't add contact anymore." << std::endl;
		return (0);
	}
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
		return (ft_add(phonebook));
	else if (!strcmp(input, "SEARCH"))
		return (ft_search(phonebook));
	else if (!strcmp(input, "EXIT"))
		return (1);
	std::cout << input << ": Unknown command." << std::endl;
	return (0);
}

int	main(void)
{
	std::string	input;
	Phonebook	phonebook;

	while (1)
	{
		std::cout << "Enter a command: ";
		std::cin >> input;
		if (exec_cmd(input.c_str(), &phonebook))
			return (0);
	}
}
