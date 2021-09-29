/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:20:32 by bditte            #+#    #+#             */
/*   Updated: 2021/09/27 21:13:29 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	ft_add(Phonebook *phonebook)
{
	int i;

	i = phonebook->nb_contacts;
	std::cout << "First name : ";
	std::getline(std::cin, phonebook->contacts[i].first_name);
	std::cout << phonebook->contacts[i].first_name << std::endl;
/*	std::cout << "Last name : ";
	std::getline(std::cin, phonebook->contacts[i].last_name);
	std::cout << "Nickname : ";
	std::getline(std::cin, phonebook->contacts[i].nickname);
	std::cout << "Phone number : ";
	std::cin >> phonebook->contacts[i].phone_nbr;
	std::cout << "Secret : ";
	std::getline(std::cin, phonebook->contacts[i].secret);*/
	phonebook->contacts[i].index = i;
	phonebook->nb_contacts++;
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