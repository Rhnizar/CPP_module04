/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:44:53 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/07 01:02:04 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int rr()
{
    // // // ICharacter *ic = new Character("Reda");


    // // // Character c("rr");
    // // // Character r(c);


    // // // for(long i=0; i<100000000000000; i++)
    // // // {
    // // //     ic->equip(new Ice());
    // // //     ic->unequip(0);
    // // //     ic->equip(new Ice());
    // // // }

    // // // AMateria *a = new Cure();
    // // // Character c1;
    // // // Character c2;
    // // // c2.equip(a);
    // // // c1.equip(a);
    // // // c2=c1;
    
    // // // delete (a);

    // // Character a("a");
        
    // //     a.equip(new Cure());
    // //     // a.equip(new Ice());
    // //     // a.equip(new Cure());
    // //     // a.equip(new Ice());
        
    // //     // a.use(0, a);
    // //     // a.use(1, a);
    // //     // a.use(2, a);
    // //     // a.use(3, a);
        
    // //     Character b("b");
    // //     // b.equip(new Cure());
    // //     // b.equip(new Ice());

    // //     a = b;

    // //     // b.use(0, b);
    // //     // b.use(1, b);

    // //     // Character a("a");
    // //     // a.equip(new Cure());
    // //     // a.equip(new Ice());
    // //     // a.equip(new Cure());
    // //     // a.equip(new Ice());
        
    // //     // a.use(0, a);
    // //     // a.use(1, a);
    // //     // a.use(2, a);
    // //     // a.use(3, a);
        
    // //     // Character b("b");

    // //     // b = a;

    // //     // b.use(0, b);
    // //     // b.use(1, b);
    // //     // b.use(2, b);
    // //     // b.use(3, b);
    
    //     Character a("a");
    //     a.equip(new Ice());
    //     a.equip(new Ice());
    //     a.equip(new Ice());
    //     a.equip(new Ice());
    //     a.equip(new Ice());
    //     Character b;
    //     Character c;

    //     b = a;
    //     c = a;
    //     // a.equip(new Cure());
    //     // a.equip(new Ice());
    //     // a.equip(new Cure());
    //     // a.equip(new Ice());
    //     // a.equip(new Ice());
        
    //     // a.use(0, a);
    //     // a.use(1, a);
    //     // a.use(2, a);
    //     // a.use(3, a);
        
    //     // Character b("b");
    //     // b.equip(new Cure());
    //     // b.equip(new Ice());

    //     // a = b;

    //     // b.use(0, b);
    //     // b.use(1, b);

    // Character a("ggg");
    // Character b(a);

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    
    return 0;
}

int main()
{
    rr();
    while(1);
}