/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:37:03 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/07 07:05:57 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();//default constractor
        WrongCat(std::string typee);// normal constractor
        WrongCat(const WrongCat& other_Cat);//copy constractor
        WrongCat& operator=(const WrongCat& other_Cat);//copy assignement operator overloading
        ~WrongCat();// destractor 
        
        std::string getType() const;
        void    setType(std::string typee);

        void    makeSound() const;
};

#endif