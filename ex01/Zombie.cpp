/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:33:07 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/04/04 11:44:27 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return;
}

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << "A poor zombie without brain just DIE... We all remember you. " << _name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ...\n";
	return;
}
