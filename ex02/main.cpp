/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:49:17 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/09 17:36:20 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Adress memory (string): " << &string << std::endl;
	std::cout << "Adress memory (stringPTR): " << stringPTR << std::endl;
	std::cout << "Adress memory (stringREF): " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Content (string): " << string << std::endl;
	std::cout << "Content (stringPTR): " << *stringPTR << std::endl;
	std::cout << "Content (stringREF): " << stringREF << std::endl;
	return (0);
}
