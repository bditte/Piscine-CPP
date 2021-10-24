/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:13:43 by bditte            #+#    #+#             */
/*   Updated: 2021/10/23 11:34:32 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string.h>
# include <iomanip>

class Contact
{

	public:
	
	Contact(void);
	~Contact(void);

	int			getIndex() const;
	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickname() const;
	std::string	getPhoneNumber() const;
	std::string	getSecret() const;

	void		setIndex(int const index);
	void		setFirstName(std::string const name);
	void		setLastName(std::string const name);
	void		setNickname(std::string const name);
	void		setPhoneNumber(std::string const phoneNbr);
	void		setSecret(std::string const secret);

	void		display_full() const;
	void		display() const;

	private:

	int	index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string	phone_nbr;
	std::string	secret;

};


#endif