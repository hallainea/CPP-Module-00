/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 23:30:13 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/09 16:57:42 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int		main(void)
{
	PhoneBook	phonebook;
	bool		stop;
	std::string	input;

	std::cout << "Welcome to my superb phone book. :D" << std::endl;
	std::cout << "You can execute several commands (without arguments):" << std::endl;
	std::cout << "ADD, SEARCH, EXIT" << std::endl;
	stop = false;
	while (!stop)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		if (std::cin.eof() || !input.compare("EXIT"))
			stop = true;
		else if (!input.compare("ADD"))
			phonebook.createContact();
		else if (!input.compare("SEARCH"))
			phonebook.search();
		else
			std::cout << "command not found :/" << std::endl;
	}
	if (std::cin.eof())
		std::cout << std::endl;
	return (0);
};