/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:35:31 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/03 10:45:53 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();//default constractor
        WrongAnimal(std::string typee);// normal constractor
        WrongAnimal(const WrongAnimal &other_animal);//copy constractor
        WrongAnimal& operator=(const WrongAnimal &other_animal);//copy assignement operator overloading
        virtual ~WrongAnimal();
        
        std::string getType() const;
        void    setType(std::string typee);
        
        void    makeSound() const;
};

#endif