/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:23:58 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/09 19:31:05 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon *_weapon;

public:
	HumanB(std::string const);
	HumanB( void );
	~HumanB( void );
	void attack(void);
	void setWeapon(Weapon &);
};

#endif