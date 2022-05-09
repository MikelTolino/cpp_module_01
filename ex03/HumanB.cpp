/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:23:55 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/09 19:31:18 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string const name)
{
	_name = name;
}

HumanB::HumanB(void)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	return;
}

void HumanB::setWeapon(Weapon &w)
{
	_weapon = &w;
}
