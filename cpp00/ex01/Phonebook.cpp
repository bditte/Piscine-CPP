/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:18:12 by bditte            #+#    #+#             */
/*   Updated: 2021/10/23 11:44:14 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int		Phonebook::getNbContacts() const
{
	return (this->nb_contacts);
}

Contact& Phonebook::getContact(int const index)
{
	return (this->contacts[index]);
}

void	Phonebook::setNbContacts(int const i)
{
	this->nb_contacts = i;
}

Phonebook::Phonebook(void): nb_contacts(0)
{
	return ;
}

Phonebook::~Phonebook(void)
{

	return ;
}
