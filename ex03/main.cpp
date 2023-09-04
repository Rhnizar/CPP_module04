/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:44:53 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/04 17:10:30 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "interface.hpp"
// #include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
    AMateria *r = new Ice;

    // (void)r;
    std::cout << r->getType() << std::endl;
    delete r;
    return 0;
}