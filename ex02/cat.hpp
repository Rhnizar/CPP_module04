/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:46:45 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/07 08:49:23 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain   *brain;
    public:
        Cat();//default constractor
        Cat(std::string typee);// normal constractor
        Cat(const Cat& other_Cat);//copy constractor
        Cat& operator=(const Cat& other_Cat);//copy assignement operator overloading
        ~Cat();
        
        std::string getType() const;
        void    makeSound() const;
};

#endif