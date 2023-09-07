/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:35:22 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/07 08:19:32 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    /*test the  copy assignement operator overloading*/
    /*Cat *animal = new Cat();
    Cat *animal2 = new Cat();

    *animal2 = *animal;
    
    delete animal2;
    delete animal;*/

    /* test the create and fill an array of Animal objects. */
    Animal *array[4];
    for(int i=0; i<4; i++)
    {
        if (i < 2)
            array[i] = new Cat();
        else
            array[i] = new Dog();
    }
    for(int i=0; i<4; i++)
        delete array[i];
    return 0;
}
