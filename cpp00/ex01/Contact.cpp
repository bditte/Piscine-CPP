/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:46:56 by bditte            #+#    #+#             */
/*   Updated: 2021/10/23 11:35:57 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	Contact::getIndex() const
{
	return (this->index);
}

std::string	Contact::getFirstName() const
{
	return (this->first_name);
}

std::string	Contact::getLastName() const
{
	return (this->last_name);
}

std::string	Contact::getNickname() const
{
	return (this->nickname);
}

std::string	Contact::getPhoneNumber() const
{
	return (this->phone_nbr);
}

std::string	Contact::getSecret() const
{
	return (this->secret);
}

void	Contact::setIndex(int const index)
{
	this->index = index;
}

void	Contact::setFirstName(std::string const name)
{
	this->first_name = name;
}
void	Contact::setLastName(std::string const name)
{
	this->last_name = name;
}

void	Contact::setNickname(std::string const name)
{
	this->nickname = name;
}

void	Contact::setPhoneNumber(std::string const phoneNbr)
{
	this->phone_nbr = phoneNbr;
}

void	Contact::setSecret(std::string const secret)
{
	this->secret = secret;
}

void	Contact::display_full() const
{
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "| CONTACT " << this->getIndex() << std::endl;
	std::cout << "| FIRST NAME : " << this->getFirstName() << std::endl;
	std::cout << "| LAST NAME : " << this->getLastName() << std::endl;
	std::cout << "| NICKNAME : " << this->getNickname() << std::endl;
	std::cout << "| PHONENUMBER : " << this->getPhoneNumber() << std::endl;
	std::cout << "| DARKEST SECRET : " << this->getSecret() << std::endl;
	std::cout << "--------------------------------------------" << std::endl;	
}

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

void	Contact::display() const
{
	std::cout << std::setw(10) << this->getIndex() << "|";
	if (this->getFirstName().length() < 10)
		std::cout << std::setw(10) << this->getFirstName() << "|";
	else
		display_string(this->getFirstName());
	if (this->getLastName().length() < 10)
		std::cout << std::setw(10) << this->getLastName() << "|";
	else
		display_string(this->getLastName());
	if (this->getNickname().length() < 10)
		std::cout << std::setw(10) << this->getNickname() << "|";
	else
		display_string(this->getNickname());
	std::cout << std::endl;
}


Contact::Contact(void): index(-1)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}