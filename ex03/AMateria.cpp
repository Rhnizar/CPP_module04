/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:14:35 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/03 18:45:48 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria: default constractor called " << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria: constractor with parametrs called " << std::endl;
	this->type = type;
}

AMateria::AMateria(AMateria& other_amateria)
{
	std::cout << "AMateria: copy constractor called " << std::endl;
	*this = other_amateria;
}

AMateria& AMateria::operator=(AMateria& other_amateria)
{
	std::cout << "AMateria: copy assignement operator overloading called " << std::endl;
	if (this != &other_amateria)
	{
		type = other_amateria.type;
	}
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria: destractor  called " << std::endl;
}

std::string const & AMateria::getType() const
{
	return type;
}
/* function to implement */

void AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "test\n";
}
