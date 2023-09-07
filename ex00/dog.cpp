/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:21:21 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/07 08:57:57 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog : default constractor called" << std::endl;
    type = "Dog";
}

Dog::Dog(std::string typee) : Animal(typee)
{
    std::cout << "Dog : constractor called" << std::endl;
}

Dog::Dog(const Dog& other_Dog) : Animal(other_Dog)
{
    std::cout << "Dog : copy constractor called" << std::endl;
    *this = other_Dog;
}

Dog& Dog::operator=(const Dog& other_Dog)
{
    std::cout << "Dog : copy assignement operator overloading called" << std::endl;
    if (this != &other_Dog)
    {
       type = other_Dog.type;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog : destractor called " << std::endl;
}

std::string Dog::getType() const
{
    return type;
}

/*function to implement */

void    Dog::makeSound() const
{
       std::cout << "Haaw Haaw " << std::endl;
}
