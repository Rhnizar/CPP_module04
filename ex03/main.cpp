/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:44:53 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/06 15:49:23 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int rr()
{
    // AMateria *r = new Ice;
    // AMateria *r2 = new Cure;
    ICharacter *ic = new Character("Reda");

    // r->use(*ic);
    // r2->use(*ic);
    // ic->equip(r2);

    // delete r;
    // delete r2;

    // Character c("rr");
    // Character r(c);


    for(long i=0; i<100000000000000; i++)
    {
        ic->equip(new Ice());
        ic->unequip(0);
        ic->equip(new Ice());
    }
    
    return 0;
}

int main()
{
    rr();
    while(1);
}