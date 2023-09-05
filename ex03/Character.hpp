/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:49:27 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/05 14:29:40 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

typedef struct s_materia
{
	AMateria* hold_ptr;
	struct s_materia *Next;
}	t_materia;

class Character : public ICharacter
{
	private:
		std::string	Name;
		AMateria* inventory[4];
		t_materia* materias;
	public:
	Character();//default constractor
	Character(std::string name);//constractor with parameters
	Character(const Character& other_character);//copy constractor
	Character& operator=(const Character& other_character);//copy assignement operator overloading 
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	void holdMateriaPointers(t_materia **list_ma, AMateria* mp);
	void deleteMateriaPointers(t_materia *list_ma);
	// t_materia*	getMaterias() const;
};

// class	Node
// {
// 	public:
// 		AMateria*	ptr_hold;
// 		Node*		Next;
// };
// class	LinkedList
// {
// 	private:
// 		Node*	head;
// 	public:
// 		void insertNode(AMateria*);
// 		void deleteNode(AMateria*);
// };





#endif