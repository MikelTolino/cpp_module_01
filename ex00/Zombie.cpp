/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:33:07 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/05 14:25:00 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::Zombie(void)
{
	return;
}

Zombie::~Zombie()
{
	std::cout << "A poor brainless zombie just DIED... We'll all remember you. " << _name << std::endl;
}

void Zombie::_announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ...\n";
	return;
}
