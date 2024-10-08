/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:52:52 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/07 08:57:30 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal() : type("default_animal")
{
    std::cout << "Animal : default constractor called" << std::endl;
}

Animal::Animal(std::string typee)
{
    std::cout << "Animal : constractor called" << std::endl;
    type = typee;
}

Animal::Animal(const Animal &other_animal)
{
    std::cout << "Animal : copy constractor called" << std::endl;
    *this = other_animal;
}

Animal& Animal::operator=(const Animal &other_animal)
{
    std::cout << "Animal : copy assignement operator overloading called" << std::endl;
    if (this != &other_animal)
    {
       type = other_animal.type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal : destractor called " << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

/*function to implement */

void    Animal::makeSound() const
{
       std::cout << " Sound the animals. " << std::endl; 
}
