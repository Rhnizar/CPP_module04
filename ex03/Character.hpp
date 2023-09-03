/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:49:27 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/03 18:36:36 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

// #include "AMateria.hpp"
#include <iostream>

class AMateria;
class ICharacter
{
	private:
		std::string Name;
	public:
	ICharacter();//default constractor
	ICharacter(std::string name);//constractor with parameters
	ICharacter(const ICharacter& other_Icharacter);//copy constractor
	ICharacter& operator=(const ICharacter& other_Icharacter);//copy assignement operator overloading 
	
	virtual ~ICharacter();
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif