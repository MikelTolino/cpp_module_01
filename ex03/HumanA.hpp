/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:18:54 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/09 20:18:16 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon &
	_weapon;
	std::string _name;

public:
	HumanA(std::string const, Weapon &);
	~HumanA( void );
	void attack(void);
};

#endif