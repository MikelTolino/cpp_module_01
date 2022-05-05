/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:48:20 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/05 17:46:30 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name );

int	main()
{
	size_t num;
	Zombie *horde;

	std::cout << "Brainless Zombies: ";
	std::cin >> num;
	std::cout << std::endl;

	horde = zombieHorde(num, "Pepitos");
	for (size_t i = 0; i < num; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}