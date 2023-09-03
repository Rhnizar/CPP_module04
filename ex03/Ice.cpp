/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:51:37 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/03 18:43:36 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice: default constractor called";
	type ="ice";
}

Ice::Ice(const Ice& other_Ice)
{
	std::cout << "Ice: copy constractot called" << std::endl;
	*this = other_Ice;
}

Ice& Ice::operator=(const Ice& other_Ice)
{
	std::cout << "Ice: copy assignement operator overloading called" << std::endl;
	if (this != &other_Ice)
	{
		this->type = other_Ice.type;
	}
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice: destractor called" << std::endl;
}


/*function to implement */

AMateria* Ice::clone() const
{
	Ice *i = new Ice();
	return i;
}