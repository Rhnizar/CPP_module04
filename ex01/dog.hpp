/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:45:18 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/03 10:56:49 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain   *brain;
    public:
        Dog();//default constractor
        Dog(std::string typee);// normal constractor
        Dog(const Dog &other_Dog);//copy constractor
        Dog& operator=(const Dog& other_Dog);//copy assignement operator overloading
        ~Dog();
    
        std::string getType() const;
        void    setType(std::string typee);

        void    makeSound() const;
};
#endif