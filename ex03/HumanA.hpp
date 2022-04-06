/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:18:54 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/04/06 19:26:06 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon _weapon;
	std::string _name;

public:
	HumanA(Weapon, std::string);
	~HumanA();
	void attack(void);
};
