/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:35:02 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/03 11:17:40 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain : default constractor called" << std::endl;
    for (int i=0; i<100; i++)
        ideas[i] = "default_ideas";
}

Brain::Brain(Brain& other_Brain)
{
    std::cout << "Brain : copy constractor called " << std::endl;
    *this = other_Brain;
}

Brain& Brain::operator=(Brain& other_Brain)
{
    std::cout << "Brain : copy assignement operator overloading called " << std::endl;
    if (this != &other_Brain)
    {
        for(int i=0; i<100; i++)
            ideas[i] = other_Brain.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain : destractor called " << std::endl;
}
