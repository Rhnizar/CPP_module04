/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:50:43 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/04 16:45:52 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
		Cure();//default constractor
		Cure(const Cure& other_Cure);//copy constractor
		Cure& operator=(const Cure& other_Cure);//copy assignement operator overloading
		~Cure();//destractor

		AMateria* clone() const;
		void use(ICharacter& target);
		
};

#endif