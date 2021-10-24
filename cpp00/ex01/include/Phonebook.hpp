/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:10:55 by bditte            #+#    #+#             */
/*   Updated: 2021/10/23 11:44:24 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{

	public:

	Phonebook(void);
	~Phonebook(void);

	int			getNbContacts() const;
	Contact&	getContact(int const index);
	void		setNbContacts(int const i);

	private:

	Contact	contacts[8];
	int		nb_contacts;
};

int	exec_cmd(const char *input, Phonebook *phonebook);
int	ft_search(Phonebook *phonebook);

#endif