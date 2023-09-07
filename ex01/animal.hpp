/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:37:14 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/07 07:14:30 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();//default constractor
        Animal(std::string typee);// normal constractor
        Animal(const Animal &other_animal);//copy constractor
        Animal& operator=(const Animal &other_animal);//copy assignement operator overloading
        virtual ~Animal();//destracter
        
        std::string getType() const;
        void    setType(std::string typee);
        
        virtual void    makeSound() const;
};

#endif