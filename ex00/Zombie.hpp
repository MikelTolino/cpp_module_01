/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:48:47 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/05 14:25:00 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_
#include <string>
#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(std::string);
	Zombie(void);
	~Zombie(void);
	void _announce(void);
};

#endif