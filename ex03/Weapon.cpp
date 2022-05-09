/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:18:31 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/09 19:04:54 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	return;
}

Weapon::Weapon(const std::string  & type)
{
	_type = type;
}

Weapon::~Weapon()
{
	return;
}

std::string const & Weapon::getType(void) {

	return _type;
}

void	Weapon::setType( const std::string type) {

	_type = type;
}