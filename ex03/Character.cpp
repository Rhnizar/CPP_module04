/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:52:16 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/04 22:50:47 by rrhnizar         ###   ########.fr       */
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
	std::cout << "ICharacter: copy assignement operator overloading called  " << std::endl;
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
	int i;

	for(i=0; i<4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			break;
		}
	}
	if (i == 4)
		std::cout << "array the inventory is full " << std::endl;
}

void Character::unequip(int idx)
{
	// int i;

	// for(i=0; i<4; i++)
	// {
	// 	if (inventory[i] == NULL)
	// 		break;
	// }
	// if (i != 4)
	// 	std::cout << "array the inventory is not full " << std::endl;
	// else
	// 	inventory[idx] = NULL;
	if (idx < 4 && inventory[idx])
	{
		inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (inventory[idx] != NULL)
		inventory[idx]->use(target);
}
