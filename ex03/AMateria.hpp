/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:49:23 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/29 19:15:40 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();//default constractor
        AMateria(std::string const & type);// normal constractor
        AMateria(AMateria& other_amateria);// copy constractor
        AMateria& operator=(AMateria& other_amateria);//copy assignement operator overloading
        ~AMateria();//destractor
        
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0; // pure virtual function
        virtual void use(ICharacter& target);
};

#endif