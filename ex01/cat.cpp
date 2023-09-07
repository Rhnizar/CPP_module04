/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:23:34 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/07 08:54:48 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat : default constractor called" << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(std::string typee) : Animal(typee)
{
    std::cout << "Cat : constractor called" << std::endl;
    brain = new Brain();
}

Cat::Cat(const Cat& other_Cat) : Animal(other_Cat)
{
    std::cout << "Cat : copy constractor called" << std::endl;
    *this = other_Cat;
}

Cat& Cat::operator=(const Cat& other_Cat)
{
    std::cout << "Cat : copy assignement operator overloading called" << std::endl;
    if (this != &other_Cat)
    {
       type = other_Cat.type;
    /*brain = other_Cat.brain; ===> shallow copy */
        delete this->brain;
        brain = new Brain(*other_Cat.brain); /* ==> deep copy */
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat : destractor called " << std::endl;
    delete brain;
}

std::string Cat::getType() const
{
    return type;
}

/*function to implement */

void    Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
