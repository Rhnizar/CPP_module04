/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:23:34 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/07 08:49:31 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : AAnimal()
{
    std::cout << "Cat : default constractor called" << std::endl;
    type = "def_cat";
    brain = new Brain();
}

Cat::Cat(std::string typee) : AAnimal(typee)
{
    std::cout << "Cat : constractor called" << std::endl;
    brain = new Brain();
}

Cat::Cat(const Cat& other_Cat) : AAnimal(other_Cat)
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
       brain = new Brain(*other_Cat.brain); // deep copy
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat : destractor called " << std::endl;
    delete brain;
}

/*function to implement */

std::string Cat::getType() const
{
    return type;
}

void    Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
