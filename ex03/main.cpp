/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:44:53 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/05 14:29:56 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "interface.hpp"
// #include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main()
{
    AMateria *r = new Ice;
    AMateria *r2 = new Cure;
    ICharacter *ic = new Character("Reda");

    // std::cout << r->getType() << std::endl;
    r->use(*ic);
    r2->use(*ic);

    // ic->deleteMateriaPointers(ic->getMaterias());
    delete r;
    delete r2;
    return 0;
}