/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:10:55 by bditte            #+#    #+#             */
/*   Updated: 2021/09/27 15:40:13 by bditte           ###   ########.fr       */
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

	Contact	contacts[8];
	int		nb_contacts;
};

int	exec_cmd(const char *input, Phonebook *phonebook);
int	ft_search(Phonebook *phonebook);

#endif