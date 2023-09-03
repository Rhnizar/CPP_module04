/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:51:54 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/03 18:41:44 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	std::cout << "Cure: default constractor called";
	type = "cure";
}

Cure::Cure(const Cure& other_Cure)
{
	std::cout << "Cure: copy constractot called" << std::endl;
	*this = other_Cure;
}

Cure& Cure::operator=(const Cure& other_Cure)
{
	std::cout << "Cure: copy assignement operator overloading called" << std::endl;
	if (this != &other_Cure)
	{
		this->type = other_Cure.type;
	}
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure: destractor called" << std::endl;
}

/*function to implement */

AMateria* Cure::clone() const
{
	Cure *c = new Cure();
	return c;
}