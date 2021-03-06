/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:48:20 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/05 14:25:00 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie *newZombie(std::string name);
void randomChump(std::string name);

int	main()
{
	Zombie z("Jaimito");
	Zombie *ptr = newZombie("Pepito");

	z._announce();
	ptr->_announce();
	randomChump("Marianito");
	delete ptr;
	return (0);
}