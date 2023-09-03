/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:46:45 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/03 11:05:59 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
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
        void    setType(std::string typee);

        void    makeSound() const;
};

#endif