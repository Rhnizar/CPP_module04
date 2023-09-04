/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:49:27 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/04 22:51:24 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string	Name;
		AMateria* inventory[4];
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
};



typedef struct s_character
{
	AMateria* hold_ptr;
	struct s_character *Next;
}	t_character;

#endif