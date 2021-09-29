/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:38:03 by bditte            #+#    #+#             */
/*   Updated: 2021/09/27 20:58:06 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	display_string(std::string str)
{
	const char *s;
	int			i;

	s = str.c_str();
	i = -1;
	while (++i < 9)
		std::cout << s[i];
	std::cout << ".|";
}

void	add_spaces(int nb)
{
	while (nb > 0)
	{
		std::cout << " ";
		nb--;
	}
	std::cout << "|";
}

void	display_contact(Contact contact)
{
	std::cout << contact.index;
	add_spaces(9);
	if (contact.first_name.length() < 10)
	{
		std::cout << contact.first_name;
		add_spaces(10 - contact.first_name.length());
	}
	else
		display_string(contact.first_name);
	if (contact.last_name.length() < 10)
	{
		std::cout << contact.last_name;
		add_spaces(10 - contact.last_name.length());
	}
	else
		display_string(contact.last_name);
	if (contact.nickname.length() < 10)
	{
		std::cout << contact.nickname;
		add_spaces(10 - contact.nickname.length());
	}
	else
		display_string(contact.nickname);
	std::cout << std::endl;
}

void	display_complete_contact(Contact contact)
{
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "| CONTACT " << contact.index << std::endl;
	std::cout << "| FIRST NAME : " << contact.first_name << std::endl;
	std::cout << "| LAST NAME : " << contact.last_name << std::endl;
	std::cout << "| NICKNAME : " << contact.nickname << std::endl;
	std::cout << "| PHONENUMBER : " << contact.phone_nbr << std::endl;
	std::cout << "| DARKEST SECRET : " << contact.secret << std::endl;
	std::cout << "--------------------------------------------" << std::endl;	
}

int	ft_search(Phonebook *phonebook)
{
	int			i;
	std::string	index;

	i = 0;
	if (phonebook->nb_contacts == 0)
	{
		std::cout << "No contact registered." << std::endl;
		return (0);
	}
	while (phonebook->contacts[i].index >= 0)
	{
		display_contact(phonebook->contacts[i]);
		i++;
	}
	std::cin >> index;
	if (index.length() != 1 || !isdigit(index[0]))
	{
		std::cout << "Invalid index." << std::endl;
		return (0);
	}
	i = index[0] % 48;
	if (phonebook->contacts[i].index == -1)
	{
		std::cout << "This contact does not exist." << std::endl;
	}
	display_complete_contact(phonebook->contacts[i]);
	return (0);
}