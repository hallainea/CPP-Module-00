/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:01:49 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/09 17:00:23 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact
{
private:
	std::string		information[11];
	std::string		field[11] = {
		"first name",
		"last name",
		"nickname",
		"login",
		"postal address",
		"email address",
		"phone number",
		"birthday date",
		"favorite meal",
		"underwear color",
		"darkest secret"
	};
	unsigned char	field_length = 11;

public:
	void		requestInfo();
	void		print(void);
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickname(void);
};

#endif