/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:01:49 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/10 19:26:47 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"

class PhoneBook
{
private:
	unsigned char max;
	Contact list[8];
	unsigned char amount;

public:
	PhoneBook();
	void createContact(void);
	void search(void);
};
#endif
