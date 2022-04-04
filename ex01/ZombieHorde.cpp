/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:24:41 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/04/04 12:26:50 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		std::cout << "[" << i << "] -> Zombie name: ";
		std::cin >> name;
		Zombie z(name);
		horde[i] = z;
	}
	return horde;
}