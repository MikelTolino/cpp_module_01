/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:15:08 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/04/06 19:27:38 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Weapon
{
private:
	std::string _type;

public:
	Weapon(/* args */);
	~Weapon();
	std::string getType(void);
	void setType(std::string);
};
