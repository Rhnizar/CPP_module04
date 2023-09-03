/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:35:24 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/03 11:41:53 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();//default constractor
        Brain(Brain& other_Brain);//copy constractor
        Brain& operator=(Brain& other_Brain);//copy assignement operator overloading
        ~Brain();
        
        // std::string getIdeas(int index) const
        // {
        //     for (int i=0; i<100; i++)
        //     {
        //         if (index == i && index < 100)
        //             return ideas[i];
        //     }
        //     return "default";
        // }
};

#endif