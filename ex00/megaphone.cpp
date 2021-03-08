/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 22:51:42 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/08 23:11:40 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int index = 1; index < argc; index++)
		{
			for (size_t index1 = 0; index1 < std::strlen(argv[index]); index1++)
				std::cout << (char)std::toupper(argv[index][index1]);
		}
	}
	std::cout << std::endl;
	return (0);
}