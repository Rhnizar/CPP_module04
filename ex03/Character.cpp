/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:52:16 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/06 12:24:13 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character: default constractor called " << std::endl;
	for(int i=0; i<4; i++)
		inventory[i] = NULL;
	Name = "def_name";
	materias = NULL;
}

Character::Character(std::string name)
{
	std::cout << "Character: constractor with parameters called " << std::endl;
	Name = name;
	for(int i=0; i<4; i++)
		inventory[i] = NULL;
	materias = NULL;
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
	deleteMateriaPointers(materias);
}

/* use linkedlist to hold pointers*/

void	holdMateriaPointers(t_materia **list_ma, AMateria* mp)
{
	t_materia	*newMateria;
	t_materia	*tmp;

	newMateria = new t_materia;
	if (!newMateria)
		return;
	newMateria->hold_ptr = mp;
	newMateria->Next = NULL;
	if (*list_ma == NULL)
	{
		*list_ma = newMateria;
		return ;
	}
	tmp = *list_ma;
	while (tmp->Next)
		tmp = tmp->Next;
	tmp->Next = newMateria;
}

void	deleteMateriaPointers(t_materia *list_ma)
{
	t_materia *tmp_list;

	// std::cout << list_ma;
	// exit(1);

	while (list_ma)
	{
		// printf("here\n");
		tmp_list = list_ma;
		list_ma = list_ma->Next;
		delete tmp_list->hold_ptr;
		delete tmp_list;
	}
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
	if (idx < 4 && inventory[idx])
	{
		holdMateriaPointers(&materias, inventory[idx]);
		inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (inventory[idx] != NULL)
		inventory[idx]->use(target);
}
