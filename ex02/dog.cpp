/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:21:21 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/03 13:22:45 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog() : AAnimal()
{
    std::cout << "Dog : default constractor called" << std::endl;
    type = "def_dog";
    brain = new Brain();
}

Dog::Dog(std::string typee) : AAnimal(typee)
{
    std::cout << "Dog : constractor called" << std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog& other_Dog) : AAnimal(other_Dog)
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
       /*brain = other_Dog.brain; ===> shallow copy*/
       brain = new Brain(*other_Dog.brain); // deep copy
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog : destractor called " << std::endl;
    delete brain;
}

std::string Dog::getType() const
{
    return type;
}

void    Dog::setType(std::string typee)
{
    type = typee;
}

/*function to implement */

// void    Dog::makeSound() const
// {
//        std::cout << "Haaw Haaw " << std::endl;
// }
