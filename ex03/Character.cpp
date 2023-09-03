/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:52:16 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/03 17:58:57 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

ICharacter::~ICharacter()
{
	std::cout << "ICharacter: default constractor called " << std::endl;
}

ICharacter::ICharacter()
{
	std::cout << "ICharacter: default constractor called " << std::endl;
}

ICharacter::ICharacter(std::string name)
{
	std::cout << "ICharacter:constractor with parameters called " << std::endl;
	Name = name;
}

ICharacter::ICharacter(const ICharacter& other_Icharacter)
{
	std::cout << "ICharacter: copy constractor called " << std::endl;
	*this = other_Icharacter;
}

ICharacter& ICharacter::operator=(const ICharacter& other_Icharacter)
{
	std::cout << "ICharacter: copy constractor called " << std::endl;
	if (this != &other_Icharacter)
	{
		Name = other_Icharacter.Name;
	}
	return *this;
}
