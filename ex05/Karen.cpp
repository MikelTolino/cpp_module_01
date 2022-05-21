/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:59:58 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/21 13:21:23 by mmateo-t         ###   ########.fr       */
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
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\
	 I just love it!.\n";
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough!\
	 If you did I would not have to ask for it!.\n";
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. \
	I've been coming here for years and you just started working here last month..\n";
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now..\n";
}

void Karen::complain( std::string level )
{
	Karen::*pointer_name = &Karen::level;
}