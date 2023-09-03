/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:52:52 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/03 13:41:52 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

AAnimal::AAnimal() : type("default")
{
    std::cout << "AAnimal : default constractor called" << std::endl;
}

AAnimal::AAnimal(std::string typee)
{
    std::cout << "AAnimal : constractor called" << std::endl;
    type = typee;
}

AAnimal::AAnimal(const AAnimal &other_Aanimal)
{
    std::cout << "AAnimal : copy constractor called" << std::endl;
    *this = other_Aanimal;
}

AAnimal& AAnimal::operator=(const AAnimal &other_Aanimal)
{
    std::cout << "AAnimal : copy assignement operator overloading called" << std::endl;
    if (this != &other_Aanimal)
    {
       type = other_Aanimal.type;
    }
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal : destractor called " << std::endl;
}

std::string AAnimal::getType() const
{
    return type;
}

void    AAnimal::setType(std::string typee)
{
    type = typee;
}



