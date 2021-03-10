/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:55:15 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/10 19:26:43 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <cstdlib>
#include "phonebook.hpp"

std::string intStr(int i)
{
	std::ostringstream temp;

	temp << i;
	return temp.str();
}

static std::string strResize(std::string str, size_t max_len)
{
	if (str.size() > max_len)
	{
		str = str.insert(max_len - 1, ".");
		str = str.substr(0, max_len);
	}
	else
		while (str.length() < max_len)
			str = str.insert(0, " ");
	return (str);
}

PhoneBook::PhoneBook(void) : max(8)
{
	PhoneBook::amount = 0;
}

void PhoneBook::createContact(void)
{
	if (PhoneBook::amount >= PhoneBook::max)
	{
		std::cout << "The phone book is full." << std::endl;
		return;
	}
	PhoneBook::list[PhoneBook::amount++].requestInfo();
}

void PhoneBook::search(void)
{
	std::string input;
	int index;

	if (!PhoneBook::amount)
	{
		std::cout << "The phone book is empty." << std::endl;
		return;
	}
	std::cout << strResize("index", 10);
	std::cout << "|";
	std::cout << strResize("first name", 10);
	std::cout << "|";
	std::cout << strResize("last name", 10);
	std::cout << "|";
	std::cout << strResize("nickname", 10);
	std::cout << std::endl;
	for (unsigned char index = 0; index < PhoneBook::amount; index++)
	{
		std::cout << strResize(intStr(index), 10);
		std::cout << "|";
		std::cout << strResize(PhoneBook::list[index].getFirstName(), 10);
		std::cout << "|";
		std::cout << strResize(PhoneBook::list[index].getLastName(), 10);
		std::cout << "|";
		std::cout << strResize(PhoneBook::list[index].getNickname(), 10);
		std::cout << std::endl;
	}
	std::cout << "Which contact would you like to see?" << std::endl;
	std::cout << "index: ";
	std::getline(std::cin, input);
	index = std::atoi(input.c_str());
	if (index < 0 || index >= amount)
	{
		std::cout << "Invalid index :/" << std::endl;
		return;
	}
	PhoneBook::list[index].print();
}
