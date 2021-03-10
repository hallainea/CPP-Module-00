/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 09:35:53 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/10 22:29:37 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

std::string Contact::field[11] = {
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
	"darkest secret"};

Contact::Contact() : field_length(11)
{
}

void Contact::requestInfo(void)
{
	for (unsigned char index = 0; index < Contact::field_length; index++)
	{
		std::cout << Contact::field[index] << ": ";
		std::getline(std::cin, Contact::information[index]);
	}
}

void Contact::print(void)
{
	for (unsigned char index = 0; index < Contact::field_length; index++)
		std::cout << Contact::field[index] << ": " << Contact::information[index] << std::endl;
}

std::string Contact::getFirstName(void)
{
	return (Contact::information[0]);
}

std::string Contact::getLastName(void)
{
	return (Contact::information[1]);
}

std::string Contact::getNickname(void)
{
	return (Contact::information[2]);
}
