/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:37:14 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/03 13:13:53 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();//default constractor
        AAnimal(std::string typee);// normal constractor
        AAnimal(const AAnimal &other_Aanimal);//copy constractor
        AAnimal& operator=(const AAnimal &other_Aanimal);//copy assignement operator overloading
        virtual ~AAnimal();
        
        std::string getType() const;
        void    setType(std::string typee);
        
        virtual void    makeSound() const = 0;
};

#endif