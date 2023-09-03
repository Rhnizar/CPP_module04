/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:38:54 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/03 10:40:26 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("default")
{
    std::cout << "WrongAnimal : default constractor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string typee)
{
    std::cout << "WrongAnimal : constractor called" << std::endl;
    type = typee;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other_WrongAnimal)
{
    std::cout << "WrongAnimal : copy constractor called" << std::endl;
    *this = other_WrongAnimal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other_WrongAnimal)
{
    std::cout << "WrongAnimal : copy assignement operator overloading called" << std::endl;
    if (this != &other_WrongAnimal)
    {
       type = other_WrongAnimal.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal : destractor called " << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}

void    WrongAnimal::setType(std::string typee)
{
    type = typee;
}


/*function to implement */

void    WrongAnimal::makeSound() const
{
       std::cout << " Sound the animals. " << std::endl; 
}
