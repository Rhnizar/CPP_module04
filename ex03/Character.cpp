/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:52:16 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/04 16:31:08 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character: default constractor called " << std::endl;
	for(int i=0; i<4; i++)
		inventory[i] = NULL;
}

Character::Character(std::string name)
{
	std::cout << "Character: constractor with parameters called " << std::endl;
	Name = name;
}

Character::Character(const Character& other_character)
{
	std::cout << "ICharacter: copy constractor called " << std::endl;
	*this = other_character;
}

Character& Character::operator=(const Character& other_character)
{
	std::cout << "ICharacter: copy constractor called " << std::endl;
	if (this != &other_character)
	{
		this->Name = other_character.Name;
		for (int i=0; i<4; i++)
			this->inventory[i] = other_character.inventory[i];
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Character: destractor called " << std::endl;
}

/*implement pure virtual functions */

std::string const &  Character::getName() const
{
	return Name;
}

void Character::equip(AMateria* m)
{
	(void)m;
}

void Character::unequip(int idx)
{
	(void)idx;
}

void Character::use(int idx, ICharacter& target)
{
	(void)idx;
	(void)target;
}
