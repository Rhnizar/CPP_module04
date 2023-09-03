/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:41:11 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/03 10:43:01 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat : default constractor called" << std::endl;
    type = "def_WrongCat";
}

WrongCat::WrongCat(std::string typee) : WrongAnimal(typee)
{
    std::cout << "WrongCat : constractor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other_WrongCat) : WrongAnimal(other_WrongCat)
{
    std::cout << "WrongCat : copy constractor called" << std::endl;
    *this = other_WrongCat;
}

WrongCat& WrongCat::operator=(const WrongCat& other_WrongCat)
{
    std::cout << "WrongCat : copy assignement operator overloading called" << std::endl;
    if (this != &other_WrongCat)
    {
       type = other_WrongCat.type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat : destractor called " << std::endl;
}

std::string WrongCat::getType() const
{
    return type;
}

void    WrongCat::setType(std::string typee)
{
    type = typee;
}

/*function to implement */

void    WrongCat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
