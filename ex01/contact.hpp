/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:01:49 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/10 22:28:52 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact
{
private:
	std::string information[11];
	static std::string field[11];
	unsigned char field_length;

public:
	Contact();
	void requestInfo();
	void print(void);
	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickname(void);
};
#endif
