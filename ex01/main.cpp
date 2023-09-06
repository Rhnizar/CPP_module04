/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:35:22 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/06 15:40:40 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    
    // delete j;//should not create a leak
    // delete i;
    

    /*test the constractor the class Brain */
    // const Brain brain;
    // std::cout << brain.getIdeas(1) << std::endl;

    /*test the shallow copy and deep copy */
    // Dog j;
    // Dog Dog2(j);

    Dog *animal = new Dog();
    Dog *animal2 = new Dog(*animal);

    
    delete animal2;
    delete animal;

    while(1);
    return 0;
}
