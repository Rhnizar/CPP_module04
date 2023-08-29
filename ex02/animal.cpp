/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:52:52 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/29 18:35:30 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

AAnimal::AAnimal() : type("default")
{
    std::cout << "AbstractBase : default constractor called" << std::endl;
}

AAnimal::AAnimal(std::string typee)
{
    std::cout << "AbstractBase : constractor called" << std::endl;
    type = typee;
}

AAnimal::AAnimal(const AAnimal &other_animal)
{
    std::cout << "AbstractBase : copy constractor called" << std::endl;
    *this = other_animal;
}

AAnimal& AAnimal::operator=(const AAnimal &other_animal)
{
    std::cout << "AbstractBase : copy assignement operator overloading called" << std::endl;
    if (this != &other_animal)
    {
       type = other_animal.type;
    }
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AbstractBase : destractor called " << std::endl;
}

std::string AAnimal::getType() const
{
    return type;
}

void    AAnimal::setType(std::string typee)
{
    type = typee;
}


/*function to implement */

// void    AAnimal::makeSound() const
// {
//        std::cout << " Sound the animals. " << std::endl; 
// }