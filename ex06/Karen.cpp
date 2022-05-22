/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:59:58 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/22 18:31:36 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	std::cout << "Karen has been called\n";
	return;
}

Karen::~Karen()
{
	std::cout << "Karen has been destroyed\n";
	return;
}

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]\n" << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\
	 I just love it!.\n";
}

void Karen::info(void)
{
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon cost more money. You don't put enough!\
	 If you did I would not have to ask for it!.\n";
}

void Karen::warning(void)
{
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. \
	I've been coming here for years and you just started working here last month..\n";
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]\n" << "This is unacceptable, I want to speak to the manager now..\n";
}

std::string toLowercase( std::string str)
{
	std::string lower;

	for (size_t i = 0; i < str.length(); i++)
	{
		lower += tolower(str[i]);
	}
	return lower;
}

void Karen::complain( std::string level )
{
	int op = -1;
	std::string lower = toLowercase(level);
	std::string complaintLevels[] = {
		"debug",
		"info",
		"warning",
		"error"
	};
	for (size_t i = 0; i < 4; i++)
	{
		if (lower == complaintLevels[i])
			op = i;
	}
	switch (op)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}